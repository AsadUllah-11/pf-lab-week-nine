#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Number " << index + 1 << ": ";
        cin >> number[index];
    }
    cout << "_________________________" << endl;
    for (int index = 0; index < size; index++)
    {
        cout << "Number " << index + 1 << " is: " << number[index] << endl;
    }
}