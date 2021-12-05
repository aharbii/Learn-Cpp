// Section
// Mixed Type Expressions

/*****************************************
 * Ask the user to enter 3 integers
 * Calculate the sum of the integers then
 * calculate the average of the 3 integers
 * 
 * Display the 3 integers entered
 * the sum of the 3 integers and
 * the average of the 3 integers
******************************************/

#include <iostream>

using namespace std;

int main() 
{
    int first_number{0};
    int second_number{0};
    int third_number{0};
    cout << "Enter three integers: ";
    cin >> first_number;
    cin >> second_number;
    cin >> third_number;
    cout << "First number: " << first_number << endl;
    cout << "Second number: " << second_number << endl;
    cout << "Third number: " << third_number << endl;
    int sum{0};
    sum = first_number + second_number + third_number;
    cout << "Sum: " << sum << endl;
    double average{0.0};
    average = static_cast<double> (sum) / 3;
    cout << "Average: " << average << endl;
    cout << endl;
    return 0;
}