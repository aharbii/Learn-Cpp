// Section 10
// Challenge
// Substitution Cipher

/********************************************************************************************************************************
 * A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
 *
 * Write a program thats ask user to enter a secret message.
 *
 * Encrypt this message using the subtitution cipher and display the encrypted message.
 * Then decryped the encrypted message back to the original message.
 *
 * You may use the 2 strings below for your subsitition.
 * For example, to encrypt you can replace the character at position n in alphabet
 * with the character at position n in key.
 *
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 *
 * Have fun! And make the cipher stronger if you wish!
 * Currently, the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
 * forth. Also, currently the cipher always substitues a lowercase letter with an uppercase lettter and vice-versa.
 * This could also be improved.
 *
 * Remember the less code you write the less code you have to test!
 * Reuse existing functionality in libraries and in the std::string class!
 ********************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

    string alpha_letters{"abcdefghijklmnopqrstuvwxyzABCDEFJHIJKLMNOPQRSTUVWXYZ"};
    string cipher_letters{"defghijklmnopqrstuvwxyzABCDEFJHIJKLMNOPQRSTUVWXYZabc"};

    string secret_message{};
    cout << "Enter secret message: ";
    getline(cin, secret_message);
    cout << "You entered: '" << secret_message << "'\n";
    string encrypted{""};
    for (size_t i{0}; i < secret_message.length(); i++)
    {
        char c{secret_message[i]};
        if (isalpha(c))
        {
            int position = alpha_letters.find(c);
            encrypted = encrypted + "" + cipher_letters[position];
        }
        else
        {
            encrypted = encrypted + "" + c;
        }
    }
    cout << "Encrypted: '" << encrypted << "'\n";

    string decrypted{};
    for (size_t i{0}; i < encrypted.length(); i++)
    {
        char c{encrypted[i]};
        if (isalpha(c))
        {
            int position = cipher_letters.find(c);
            decrypted = decrypted + "" + alpha_letters[position];
        }
        else
            decrypted = decrypted + "" + c;
    }
    cout << "Decrypted: '" << decrypted << "'\n";

    return 0;
}