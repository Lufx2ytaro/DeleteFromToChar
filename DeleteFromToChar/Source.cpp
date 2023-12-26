#include <iostream>

using namespace std;



void charr(string str_one, string str_two, char fromChar, char toChar)
{
    size_t fromPos = str_one.find(fromChar);
    size_t toPos = str_two.find(toChar);

    if (fromPos != string::npos && toPos != string::npos) {
        string str_three = str_two.substr(0, toPos) + str_one.substr(fromPos + 1);
        cout << "RESULT:  " << str_three << endl;
    }
    else
    {
        cout << "One or both of the specified Latters not found" << endl;
    }
}


int main()
{
    string str_one;
    string str_two;
    cout << "Enter the first string: ";
    cin >> str_one;
    cout << "Enter the second string: ";
    cin >> str_two;

    char fromChar;
    char toChar;
    cout << "Enter the character from the first string: ";
    cin >> fromChar;
    cout << "Enter the character from the second string: ";
    cin >> toChar;

    charr(str_one, str_two, fromChar, toChar);

    return 0;
}