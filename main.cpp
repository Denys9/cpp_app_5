#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int temp, num, i, j;
    const uint32_t size = 5;
    int arr[size];
    /* cout << "Enter each month income:" << endl;*/
    for (size_t i = 0; i < size; i++)
    {
        cout << "->";
        cin >> arr[i];
    }

    for (i = size - 1; i != -1; i--)
    {
        if (i != -858993460)
        {
            cout << arr[i] << "\t";
        }
    }

}