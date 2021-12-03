// Section 6
// Constants

/********************************************************************
 * File: main.cpp
 * Description: Frank's Carpet Cleaning Service
 *              Charges $25 per small room
 *              Charges $35 per large room
 *              Sales tax rate is 6%
 *              Estimates are valid for 30 days
 *
 *              Prompt the user for the number of rooms they would
 *              like cleaned and provide an estimate such as:
 *
 *              Estimate for carpet cleaning service:
 *              Number of small rooms: 3
 *              Number of large rooms: 1
 *              Price per small room: $25
 *              price per large room: $35
 *              Cost: $110
 *              Tax: $6.6
 *
 *              ======================================
 *              Total estimate: $116.6
 *              This estimate is valid for 30 days
 *
 * Pseudocode:
 *      - Prompt the user to enter the number of small rooms
 *      - Prompt the user to enter the number of large rooms
 *      - Display number of small rooms
 *      - Display number of large rooms
 *      - Display price per small room
 *      - Display price per large room
 *      - Display small rooms cost: (number of small rooms * price per small room)
 *      - Display large rooms cost: (number of large rooms * price per large room)
 *      - Display rooms cost: small rooms cost + large rooms cost
 *      - Display tax: (rooms cost * tax rate)
 *      - Display total estimate: Cost + Tax
 *      - Display estimate expiration time
 *
 * Author: Ahmed Harbi
 * Date: December 2021
 *********************************************************************/

#include <iostream>

using namespace std;

int main()
{

    cout << "Hello, welcome to Frank's Carpet Service" << endl;

    const int price_per_small_room(25);
    const int price_per_large_room(35);
    const float tax_rate(0.06);
    const int valid_days(30);

    int number_of_small_rooms;
    cout << "Enter number of small rooms: ";
    cin >> number_of_small_rooms;

    int number_of_large_rooms;
    cout << "Enter number of large rooms: ";
    cin >> number_of_large_rooms;

    int small_rooms_cost = number_of_small_rooms * price_per_small_room;
    int large_rooms_cost = number_of_large_rooms * price_per_large_room;
    int cost = small_rooms_cost + large_rooms_cost;
    float tax = cost * tax_rate;
    float total_estimate = cost + tax;

    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of smallrooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: " << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;

    return 0;
}