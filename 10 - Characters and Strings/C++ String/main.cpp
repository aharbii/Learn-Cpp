#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
     string s0;
     string s1{"Apple"};
     string s2{"Banana"};
     string s3{"Kiwi"};
     string s4{"apple"};
     string s5{s1};
     string s6{s1, 0, 3};
     string s7(10, 'X');

     cout << s0 << endl;
     cout << s0.length() << endl;

     cout << "\nInitialization"
          << "\n---------------------------------------\n";
     cout << "s1 is initialized to: " << s1 << endl;
     cout << "s2 is initialized to: " << s2 << endl;
     cout << "s3 is initialized to: " << s3 << endl;
     cout << "s4 is initialized to: " << s4 << endl;
     cout << "s5 is initialized to: " << s5 << endl;
     cout << "s6 is initialized to: " << s6 << endl;
     cout << "s7 is initialized to: " << s7 << endl;

     cout << "\nComparison"
          << "\n------------------------------------\n";
     cout << boolalpha;
     cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
     cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
     cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
     cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
     cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
     cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
     cout << s1 << " == "
          << "Apple"
          << ": " << (s1 == "Apple") << endl;

     // Assignment
     cout << "\nAssignment"
          << "\n---------------------------------\n";
     s1 = "Watermelon";
     cout << "s1 is now " << s1 << endl;
     s2 = s1;
     cout << "s2 is now " << s2 << endl;
     s3 = "Frank";
     cout << "s3 is now " << s3 << endl;
     s3[0] = 'C';
     cout << "s3 change the first letter to C: " << s3 << endl;
     s3.at(0) = 'P';
     cout << "s3 change first letter to P: " << s3 << endl;

     // Concatenation
     s3 = "Watermelon";
     cout << "\nConcantenation"
          << "\n--------------------------------\n";
     s3 = s5 + " and " + s2 + " juice";
     cout << "s3 is now: " << s3 << endl;
     // not allowed (s3 = "nice " + "cold" + s5 + " juice");

     // for loop
     cout << "\nLooping"
          << "\n---------------------------------\n";
     s1 = "Apple";
     for (size_t i{0}; i < s1.length(); i++)
          cout << s1.at(i) << " ";
     cout << endl;

     // Ranged-based Loop
     for (auto c : s1)
          cout << c << " ";
     cout << endl;

     // Substring
     cout << "\nSubstring"
          << "\n---------------------------------\n";
     s1 = "This is a test";
     cout << s1.substr(0, 4) << endl;
     cout << s1.substr(5, 2) << endl;
     cout << s1.substr(10, 4) << endl;

     // Erase
     cout << "\nErase"
          << "\n---------------------------------\n";
     s1.erase(0, 5);
     cout << "s1 is now '" << s1 << "'\n";

     // get line
     cout << "\ngetline()"
          << "\n---------------------------------\n";
     string full_name{};
     cout << "Enter your full name: ";
     getline(cin, full_name);
     cout << "Your full name is " << full_name << endl;

     // Find
     cout << "\nFind"
          << "\n---------------------------------\n";
     s1 = "the secret word is Boo";
     string word{};
     cout << "Enter the word to find: ";
     cin >> word;
     size_t position = s1.find(word);
     if (position != string::npos)
          cout << "Found " << word << " at position: " << position << endl;
     else
          cout << "Sorry! " << word << " not found!" << endl;
     return 0;
}