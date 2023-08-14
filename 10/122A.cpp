#include <iostream>

using namespace std;

int main()
{
    int n, arr[] = { 4, 7, 44, 77, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777 };
    cin >> n;
    for (int i = 0; i < 14; i++)
        if (n % arr[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;

    return 0;
}