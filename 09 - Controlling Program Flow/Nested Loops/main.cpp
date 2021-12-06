// Section 9
// Nested Loops

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "=================" << endl;
    }

    cout << endl;
    return 0;
}