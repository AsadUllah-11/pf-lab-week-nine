#include <iostream>
using namespace std;
main()
{
    int firstArray[2];
    for (int index = 0; index < 2; index++)
    {
        cout << "Enter First Array element " << index + 1 << " ";
        cin >> firstArray[index];
    }
    int size;
    cout << "Enter Second Array Size: ";
    cin >> size;
    int secondArray[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Second Array Elements: ";
        cin >> secondArray[index];
    }
    cout << "(" << firstArray[0] << ", ";
    for (int index = 0; index < size; index++)
    {
        cout << secondArray[index] << ", ";
    }
    cout << firstArray[1] << ")";
}