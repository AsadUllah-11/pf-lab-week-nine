#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter Word: ";
    cin >> word;
    int length = 0;
    for (int index = 0; word[index] != '\0'; index++)
    {
        if (word[index] == 'a')
        {
            word[index] = 'b';
        }
        else if (word[index] == 'b')
        {
            word[index] = 'c';
        }
        else if (word[index] == 'c')
        {
            word[index] = 'd';
        }
        else if (word[index] == 'd')
        {
            word[index] = 'e';
        }
        else if (word[index] == 'e')
        {
            word[index] = 'f';
        }
        else if (word[index] == 'f')
        {
            word[index] = 'g';
        }
        else if (word[index] == 'g')
        {
            word[index] = 'h';
        }
        else if (word[index] == 'h')
        {
            word[index] = 'i';
        }
        else if (word[index] == 'i')
        {
            word[index] = 'j';
        }
        else if (word[index] == 'j')
        {
            word[index] = 'k';
        }
        else if (word[index] == 'k')
        {
            word[index] = 'l';
        }
        else if (word[index] == 'l')
        {
            word[index] = 'm';
        }
        else if (word[index] == 'm')
        {
            word[index] = 'n';
        }
        else if (word[index] == 'n')
        {
            word[index] = 'o';
        }
        else if (word[index] == 'o')
        {
            word[index] = 'p';
        }
        else if (word[index] == 'p')
        {
            word[index] = 'q';
        }
        else if (word[index] == 'q')
        {
            word[index] = 'r';
        }
        else if (word[index] == 'r')
        {
            word[index] = 's';
        }
        else if (word[index] == 's')
        {
            word[index] = 't';
        }
        else if (word[index] == 't')
        {
            word[index] = 'u';
        }
        else if (word[index] == 'u')
        {
            word[index] = 'v';
        }
        else if (word[index] == 'v')
        {
            word[index] = 'w';
        }
        else if (word[index] == 'w')
        {
            word[index] = 'x';
        }
        else if (word[index] == 'x')
        {
            word[index] = 'y';
        }
        else if (word[index] == 'y')
        {
            word[index] = 'z';
        }
        else if (word[index] == 'z')
        {
            word[index] = 'a';
        }
    }
    for (int index = 0; word[index] != '\0'; index++)
    {
        cout << word[index];
    }
}