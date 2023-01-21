#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>
int main()
{
    int arr[] = { rand()};

    std::reverse(std::begin(arr), std::end(arr));

    for (int& i : arr) {
        std::cout << i << ' ';
    }

    return 0;
}