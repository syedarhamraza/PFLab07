#include <iostream>
using namespace std;

int main()
{
    int sizeOfArray = 0;
    int arr[sizeOfArray];
    cout << "Enter the Size of the array: ";
    cin >> sizeOfArray;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter the value to store in an array :";
        cin >> arr[i];
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}