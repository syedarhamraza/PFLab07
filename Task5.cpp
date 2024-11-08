#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int positiveNumbers = 0, negativeNumbers = 0, oddNumbers = 0, evenNumbers = 0, zeroNumbers = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Number " << (i + 1) << ": ";
        cin >> numbers[i];
        if (numbers[i] > 0)
        {
            positiveNumbers++;
        }
        else if (numbers[i] < 0)
        {
            negativeNumbers++;
        }
        else
        {
            zeroNumbers++;
        }

        if (numbers[i] % 2 == 0)
        {
            evenNumbers++;
        }
        else
        {
            oddNumbers++;
        }
    }

    cout << "Positive numbers: " << positiveNumbers << endl;
    cout << "Negative numbers: " << negativeNumbers << endl;
    cout << "Odd numbers: " << oddNumbers << endl;
    cout << "Even numbers: " << evenNumbers << endl;
    cout << "Zeros: " << zeroNumbers << endl;

    return 0;
}
