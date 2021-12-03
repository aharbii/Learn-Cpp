#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int room_length;
    cout << "Enter the length of the room: ";
    cin >> room_length;

    int room_width;
    cout << "Enter the width of the room: ";
    cin >> room_width;
    
    int area;
    area = room_length * room_width;
    cout << "The area of the room is " << area << " squared meter.\n";
    
    return 0;
}