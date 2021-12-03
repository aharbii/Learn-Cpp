// Section 6
// Constants

/********************************************************************
 * File: main.cpp
 * Description: Frank's Carpet Cleaning Service
 *              Charges $30 per room
 *              Sales tax rate is 6%
 *              Estimates are valid for 30 days
 * 
 *              Prompt the user for the number of rooms they would
 *              like cleaned and provide an estimate such as:
 *              
 *              Estimate for carpet cleaning service:
 *              Number of rooms: 2
 *              Price per room: $30
 *              Cost: $60
 *              Tax: $3.6
 * 
 *              ======================================
 *              Total estimate: $63.6
 *              This estimate is valid for 30 days
 * 
 * Pseudocode:
 *      - Prompt the user to enter the number of rooms
 *      - Display number of rooms
 *      - Display price per room
 *      - Display cost: (number of rooms * price per room)
 *      - Display tax: (number of rooms * price per room * tax rate)
 *      - Display total estimate: Cost + Tax
 *      - Display estimate expiration time
 * 
 * 
 * Author: Ahmed Harbi
 * Date: December 2021
*********************************************************************/

#include <iostream>

using namespace std;

int main() {

    cout << "Hello, welcome to Frank's Carpet Service" << endl;

    const int price_per_room(30);
    const float tax_rate(0.06);
    const int valid_days(30);

    int number_of_rooms;
    cout << "Enter number of rooms: ";
    cin >> number_of_rooms;

    int cost = number_of_rooms * price_per_room;
    float tax = cost * tax_rate;
    float total_estimate = cost + tax;

    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;

    return 0;
}