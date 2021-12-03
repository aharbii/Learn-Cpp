#include <iostream>

using namespace std;

int main()
{
    char middle_initial('J');
    cout << "My middle initial is " << middle_initial << endl;

    unsigned short int exam_score(55);
    cout << "My exam score was " << exam_score << endl;

    int countries_represented(65);
    cout << "There was " << countries_represented << " countries represented in my meeting." << endl;

    long people_in_florida(20610000);
    cout << "There are about " << people_in_florida << " people in Florida." << endl;

    long long people_on_earth(7600000000);
    cout << "There are about " << people_on_earth << " people on earth." << endl;

    float car_payment(401.23);
    cout << "My car payment is " << car_payment << endl;

    double PI(3.14159);
    cout << "PI is " << PI << endl;

    long double large_amount(2.7e120);
    cout << large_amount << " is a very big number." << endl;

    bool game_over(false);
    cout << "The value of game over is " << game_over << endl;

    return 0;
}