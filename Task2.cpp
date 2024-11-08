#include <iostream>
using namespace std;

int main()
{
    int sizeOfArray = 10;
    int mosthours = 0;
    int highestindex = 0;
    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter the number of hours studied by students " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Hours Studied by student " << i + 1 << ": " << arr[i] << " Hours" << endl;
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] > mosthours)
        {
            mosthours = arr[i];
            highestindex = i;
        }
    }
    cout << "The Most hours studied by a student " << highestindex + 1 << " is: " << mosthours;

    return 0;
}