#include <iostream>
using namespace std;
main()
{
    // Program to Print String in Reverse Order
    string name;
    cout << "Enter Word: ";
    getline(cin, name);
    int length = 0;
    for (int index = 0; name[index] != '\0'; index++)
    {
        length++;
    }
    for (int index = length; index >= 0; index--)
    {
        cout << name[index];
    }
}