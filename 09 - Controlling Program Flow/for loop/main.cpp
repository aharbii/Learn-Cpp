// Section 9
// for Loop

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    for (int i = 1; i < 11; i++)
    {
        cout << i << endl;
    }
    cout << endl;
    
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }
    cout << endl;

    for (int i = 10; i < 101; i += 10)
    {
        if (i % 15 == 0)
            cout << i << endl;
    }
    cout << endl;

    for (int i{1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }
    cout << endl;

    for (int i = 1; i <= 100; i++)
    {
        cout << i;
        if (i % 10 == 0)
        {
            cout << endl;
        }
        else
        {
            if (i < 10)
            {
                cout << " ";
            }
            cout << " ";
        }
    }
    cout << endl;

    for (int i = 1; i <= 100; i++)
    {
        cout << i << (i % 10 == 0 ? "\n" : (i < 10 ? "  " : " "));
    }
    cout << endl;

    vector<int> nums{10, 20, 30, 40, 50};
    for (unsigned i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}