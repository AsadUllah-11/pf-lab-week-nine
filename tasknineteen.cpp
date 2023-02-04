#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many numbers you want to store? ";
    cin >> size;
    int numbers[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Number: ";
        cin >> numbers[index];
    }
    int findSmallest;
    findSmallest = numbers[0];
    for (int index = 0; index < size; index++)
    {
        if (findSmallest > numbers[index])
        {
            findSmallest = numbers[index];
        }
    }
    cout << "Smallest Number: " << findSmallest;
}