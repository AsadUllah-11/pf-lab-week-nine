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
    for (int index = (size - 1); index >= 0; index--)
    {
        cout << "Number is: " << numbers[index] << endl;
    }
}