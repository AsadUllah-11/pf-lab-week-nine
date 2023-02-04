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
    int findLargest;
    findLargest = numbers[0];
    for (int index = 0; index < size; index++)
    {
        if (findLargest < numbers[index])
        {
            findLargest = numbers[index];
        }
    }
    cout << "Largest Number: " << findLargest;
}