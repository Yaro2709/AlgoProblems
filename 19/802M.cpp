#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;

    delete[] arr;

    return 0;
}