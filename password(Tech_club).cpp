#include <iostream>
#include <string>
#include <cctype>

using namespace std;

#define PASSWORD_LENGTH 8

int main()
{
    string password;
    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;
    bool special_char = false;

    cout << "Enter a password: ";
    getline(cin, password);

    if (password.length() < PASSWORD_LENGTH)
    {
        cout << "Password is not strong. It should be at least " << PASSWORD_LENGTH << " characters long.\n";
        return 1;
    }

    for (int i = 0; i < password.length(); i++)
    {
        char c = password[i];

        if (c >= 'A' && c <= 'Z')
        {
            uppercase = true;
        }

        if (c >= 'a' && c <= 'z')
        {
            lowercase = true;
        }

        if (c >= '0' && c <= '9')
        {
            digit = true;
        }

        if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && !(c >= '0' && c <= '9'))
        {
            special_char = true;
        }
    }

    if (uppercase && lowercase && digit && special_char)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}
/*
 1. first we will set the max length of the password as '8'
 2. then input the password from the user which will be stored in "password"
 3. we will check the length  of the password (if its less than 8 it will return "password is < 8 pls try again")
 4.if the condition is true then the password will undergo an iteration till its length which will check if it contains :-
 speacial character
digit
 uppercase
 lowercase

5. then we will check condition if the password contains all the four categories mentioned above it will return 1 else 0 .
*/