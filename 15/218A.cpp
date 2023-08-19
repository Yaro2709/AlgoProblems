#include<iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int *frq = new int[101];
    int *arr = new int[2 * x + 1];
    for (int i = 0; i < (2 * x + 1); i++)
        cin >> arr[i];
    for (int i = 0; i < (2 * x + 1); i++)
    {
        if (i % 2 == 1 && y > 0 && (arr[i] - 1) > arr[i - 1] && (arr[i] - 1) > arr[i + 1])
        {
            arr[i]--;
            y--;
        }
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] frq;
    delete[] arr;

    return 0;
}