#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number in the array: ";
        cin >> arr[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}