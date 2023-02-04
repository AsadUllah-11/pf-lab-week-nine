#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter Word: ";
    getline(cin, name);
    char check;
    cout << "Enter Character for Checking: ";
    cin >> check;
    int count = 0;
    for (int index = 0; name[index] != '\0'; index++)
    {
        if (name[index] == check)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout << check << " is present in " << name;
    }
    else
    {
        cout << check << " is absent in " << name;
    }
}