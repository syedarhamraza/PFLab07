#include <iostream>
using namespace std;

int main()
{
    int arr[7];
    int integers = 0;

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter Number " << (i + 1) << ": ";
        cin >> arr[i];
        if (arr[i] % 5 == 0)
        {
            integers++;
        }
    }
    cout << "Number of integers that are multiples of 5: " << integers << endl;
    return 0;
}
