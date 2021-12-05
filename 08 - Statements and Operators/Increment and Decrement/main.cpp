#include <iostream>

using namespace std;

int main()
{
    int counter{10};
    int result{0};

    // Example 1 - simple increment
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    // Example 2 - preincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; // Note the pre increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // Example 3 - Post-increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++; // Note the pre increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // Example 4
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = ++counter + 10; // Note the pre icrement

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // Example 5
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = counter++ + 10; // Note the pre icrement

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    return 0;
}