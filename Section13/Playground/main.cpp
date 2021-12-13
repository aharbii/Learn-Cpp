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


int main()
{
    Player frank;
    Player hero;
    Player player[]{frank, hero};
    cout << endl;
    return 0;
}
