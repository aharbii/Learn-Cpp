#include <iostream>

using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};

    cout << boolalpha; // will display true/false instead of 1/0 for booleans
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);

    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;

    char char1{}, char2{};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;

    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);

    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;

    double doub1{}, doub2{};
    cout << "Enter two doubles separated by a space: ";
    cin >> doub1 >> doub2;
    equal_result = (doub1 == doub2);
    not_equal_result = (doub1 != doub2);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;

    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> doub1;
    equal_result = (num1 == doub1);
    not_equal_result = (num1 != doub1);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
}