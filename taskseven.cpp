#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter Word: ";
    getline(cin, word);
    char letter;
    cout << "Enter Character: ";
    cin >> letter;
    int length = 0;
    for (int index = 0; word[index] != '\0'; index++)
    {
        length++;
    }
    if (word[length - 1] == letter)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}