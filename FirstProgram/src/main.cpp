/**************************************************
 * File: main.cpp
 * Description: First C++ program takes number from
 *              the user and print it back with
 *              sentence. 
 * 
 * Author: Ahmed Harbi
 * Date: December 2021
**************************************************/

#include <iostream>

int main()
{
    int favorite_number; // this is where my favorite number is stored
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;

    return 0;
}