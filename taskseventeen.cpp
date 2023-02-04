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
    int productNumber;
    cout << "Enter Number for Product: ";
    cin >> productNumber;
    for (int index = 0; index < size; index++)
    {
        cout << numbers[index] * productNumber << endl;
    }
}