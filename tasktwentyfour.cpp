#include <iostream>
using namespace std;
main()
{
    string line;
    cout << "Enter Line: ";
    getline(cin, line);
    for (int index = 0; line[index] != '\0'; index++)
    {
        if (line[index] != 'a' && line[index] != 'e' && line[index] != 'i' && line[index] != 'o' && line[index] != 'u' && line[index] != 'A' && line[index] != 'E' && line[index] != 'I' && line[index] != 'O' && line[index] != 'U')
        {
            cout << line[index];
        }
    }
}