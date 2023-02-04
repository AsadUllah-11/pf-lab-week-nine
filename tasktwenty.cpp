#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Hos many resistances you want to enter? ";
    cin >> size;
    float resistance[size];
    float sum;
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Resistance Value: ";
        cin >> resistance[index];
        sum = sum + resistance[index];
    }
    cout << sum << " Ohms";
}