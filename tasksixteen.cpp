#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many numbers you want to enter? ";
    cin >> size;
    int numbers[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Number: ";
        cin >> numbers[index];
    }
    int check;
    cout << "Enter Number for checking: ";
    cin >> check;
    int count = 0;
    for (int index = 0; index < size; index++)
    {
        if (numbers[index] == check)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        cout << "Already Entered";
    }
    else
    {
        cout << "Not Entered";
    }
}