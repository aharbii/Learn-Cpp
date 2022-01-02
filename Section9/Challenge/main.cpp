// Section 9
// Challenge
/************************************************************************************************************************
 * This challenge is about using a collection (list) of integers and allowing the user
 * to select options from a menu to perform operations on the list
 *
 * Your program shoud display a menu options to the user as follows:
 *
 * P - Print numbers
 * A - Add a number
 * M - Display mean of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 *
 * Enter your choice:
 *
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * if an illegal choice is made, you should display, "Unkown selection, please try again" and the menu options should be
 * displayed again.
 *
 * If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
 * for example, [1 2 3 4 5 ]
 *
 * If the user enters 'A' or 'a' then you should prompt the user for an ineger to add to the list
 * which you will add to the list and then display it was added. for example, if the user enters 5
 * You should display, "5 added".
 * Duplicate list entries are OK
 *
 * If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
 * If the list is empty you should display, "Unable to calculate the mean - no data"
 *
 * If the user enters 'S' or 's' you should display the smallest element in the list.
 * For example, if the list contains [2 4 5 1], you should display "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty"
 *
 * If the user enter 'L' or 'l' you should display the largest element in the list
 * For example, if the list contains [2 4 5 1], you should display "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number - list is empty"
 *
 * If the user enters 'Q' or 'q' then you should display "Goodbye" and the program should terminate.
 *
 * Befor you begin. Write out the steps you need to take and decide in what order they should be done.
 * Think about what loops you should use as well as what you will use for selection logic.
 *
 * This exercise can be challenging! It may likely take a few attempts before you comlete it -- that's OK!
 *
 * Finally, be sure to test your program as you go and at the end.
 *
 * Hint: Use a vector!
 *
 * Additional functionality if you wish to extend this program.
 *
 * - search for a number in the list and if found display the number of times it occurs in the list
 * - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
 * - don't allow duplicate entries
 * - come up with your own ideas!
 *
 * Good luck!
 ************************************************************************************************************************/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    char selector{};
    vector<int> numbers{};
    do
    {
        cout << "=================================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "F - Find number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter you choice: ";
        cin >> selector;
        switch (selector)
        {
        case 'p':
        case 'P':
        {

            if (numbers.size() > 0)
            {
                cout << "[ ";
                for (auto number : numbers)
                    cout << number << " ";
                cout << "]" << endl;
            }
            else
                cout << "[] - the list is empty" << endl;
            break;
        }
        case 'a':
        case 'A':
        {
            int number{};
            cout << "Enter number: ";
            cin >> number;
            numbers.push_back(number);
            cout << number << " added" << endl;
            break;
        }
        case 'm':
        case 'M':
        {
            double mean{};
            double sum{};
            if (numbers.size() > 0)
            {
                for (auto number : numbers)
                    sum += number;
                mean = sum / numbers.size();
                cout << "mean = " << mean << endl;
            }
            else
                cout << "Unable to calulate the mean - no data" << endl;
            break;
        }
        case 's':
        case 'S':
        {
            if (numbers.size() > 0)
            {
                int smallest{numbers[0]};
                for (auto number : numbers)
                {
                    if (number < smallest)
                        smallest = number;
                }
                cout << "The smallest number is " << smallest << endl;
            }
            else
                cout << "Unable to determine the smallest number - list is empty" << endl;
            break;
        }
        case 'l':
        case 'L':
        {
            if (numbers.size() > 0)
            {
                int largest{numbers[0]};
                for (auto number : numbers)
                {
                    if (number > largest)
                        largest = number;
                }
                cout << "The largest number is " << largest << endl;
            }
            else
                cout << "Unable to determine the largest number - list is empty" << endl;
            break;
        }
        case 'c':
        case 'C':
        {
            if (numbers.size() > 0)
            {
                numbers.clear();
                cout << "list has been cleared" << endl;
            }
            else
                cout << "Unable to clear the list - list is empty" << endl;
            break;
        }
        case 'f':
        case 'F':
        {
            if (numbers.size() > 0)
            {
                int to_find{}, counter{0};
                cout << "Enter number: ";
                cin >> to_find;
                for (auto number : numbers)
                {
                    if (number == to_find)
                        counter++;
                }
                cout << to_find << " occurs " << counter << " times in the list" << endl;
            }
            else
                cout << "Unable to find the number - list is empty" << endl;
            break;
        }
        case 'q':
        case 'Q':
            cout << "Goodbye.." << endl;
            break;
        default:
            cout << "Unkown selection, please try again" << endl;
            break;
        }
    } while (selector != 'Q' && selector != 'q');
    cout << endl;
    return 0;
}