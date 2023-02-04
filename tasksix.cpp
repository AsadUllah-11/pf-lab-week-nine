#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter Word: ";
    getline(cin, name);
    int length = 0;
    for (int index = 0; name[index] != '\0'; index++)
    {
        length++;
    }
    cout << "Length = " << length << endl;
    if (length % 2 == 0)
    {
        cout << "Length is Even";
    }
    else
    {
        cout << "Length is Odd";
    }
}