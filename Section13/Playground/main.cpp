#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // Attributes
    string name{};
    int health{};
    int xp{};

    // Methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name{};
    double balance{};

    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Account frank_account;
    Account jim_account;
    
    Player frank;
    Player hero;
    Player player[]{frank, hero};
    vector<Player> player_vec{frank};
    player_vec.push_back(hero);
    cout << endl;
    return 0;
}
