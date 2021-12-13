#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    public:
        // Attributes
        string name{"Player"};
        int health{100};
        int xp{0};

        // Methods
        void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; };
        bool is_dead();
};

class Account {
    public:
        // attributes
        string name{"Account"};
        double balance{0.0};

        // methods
        void deposit(double bal) { 
            balance += bal;
            cout << "In deposit" << endl;
        };

        void withdraw(double bal) {
            balance -= bal;
            cout << "In withdraw" << endl;
        };
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank Account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000);
    frank_account.withdraw(500);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there!");

    Player *enemy;
    enemy = new Player{};
    (*enemy).name = "Enemy";
    (*enemy).health = 50;
    enemy->xp = 15;
    enemy->talk("I will destroy you!");
    cout << endl;
    return 0;
}
