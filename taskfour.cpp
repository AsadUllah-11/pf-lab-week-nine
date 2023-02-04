#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter Word: ";
    getline(cin, word);
    for (int index = 0; word[index] != '\0'; index++)
    {
        cout << word[index] << " is stored in index " << index << endl;
    }
}