#include <iostream>
using namespace std;
main()
{
    // Program to find average of "N" Natural Numbers using Arrays
    int arr_size;
    float sum = 0;
    float average;
    cout << "How many numbers you want to find their average? ";
    cin >> arr_size;
    float number[arr_size];
    for (int index = 0; index < arr_size; index++)
    {
        cout << "Enter Number: ";
        cin >> number[index];
    }
    for (int index = 0; index < arr_size; index++)
    {
        sum = sum + number[index];
    }
    average = sum / arr_size;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;
}