#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "row - ";
    cin >> row;
    cout << "col - ";
    cin >> column;
    char sym;
    cout << "sym - ";
    cin >> sym;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || i == row || j == 1 || j == column)
                cout << sym;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}