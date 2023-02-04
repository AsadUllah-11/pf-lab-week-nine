#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter Word: ";
    getline(cin, word);
    int length = 0;
    for (int index = 0; word[index] != '\0'; index++)
    {
        length++;
    }
    /*
    length string shortcut
    int length = word.length();
    */
    int vowels = 0;
    for (int index = 0; index <= length; index++)
    {
        if (word[index] == 'a' || word[index] == 'e' || word[index] == 'i' || word[index] == 'o' || word[index] == 'u')
        {
            vowels++;
        }
    }
    cout << "Number of Vowels: " << vowels;
}