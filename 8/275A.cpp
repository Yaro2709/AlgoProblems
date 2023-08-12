#include <iostream>

using namespace std;

int arr[5][5];

int main() {

    for (int i = 1; i < 4; i++)
    {
        cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << (arr[i][j] + arr[i - 1][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j + 1] + 1) % 2;
        }
        cout << endl;
    }

    return 0;
}