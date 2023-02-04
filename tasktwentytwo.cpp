#include <iostream>
using namespace std;
main()
{
    float amountInPocket[4];
    float actualPrice;
    float totalAmount;
    for (int index = 0; index < 4; index++)
    {
        cout << "Enter Value: ";
        cin >> amountInPocket[index];
    }
    totalAmount = (amountInPocket[0] * 0.25) + (amountInPocket[1] * 0.10) + (amountInPocket[2] * 0.05) + (amountInPocket[3] * 0.01);
    cout << "Enter Actual Price: ";
    cin >> actualPrice;
    if (totalAmount >= actualPrice)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}