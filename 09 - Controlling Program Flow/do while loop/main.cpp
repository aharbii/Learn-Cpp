// Section 9
// Do while loop

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    char selector{};
    do
    {
        cout << "---------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q: Quit" << endl;
        cout << endl;
        cout << "Enter your selction: ";
        cin >> selector;

        switch (selector)
        {
        case '1':
            cout << "\nyou chose 1 - doing this." << endl;
            break;
        case '2':
            cout << "\nyou chose 2 - doing that." << endl;
            break;
        case '3':
            cout << "\nyou chose 3 - doing something else." << endl;
            break;
        case 'q':
        case 'Q':
            cout << "\nGoodbye..." << endl;
            break;
        default:
            cout << "\nUnkown option -- try again..." << endl;
            break;
        }
        cout << endl;
    } while (selector != 'Q' && selector != 'q');
    cout << endl;
    return 0;
}