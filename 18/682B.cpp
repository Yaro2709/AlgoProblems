#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
            x++;
    }
    cout << x << endl;

    delete[] arr;

    return 0;
}