#include <iostream>
#include <time.h>
using namespace std;
int main()
{

    int sum = 0;
    const uint32_t size = 5;
    int arr[size];
    cout << "Enter size of each side im cm:" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << "->";
        cin >> arr[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Perimeter: " << sum << "cm";


}