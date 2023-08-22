#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int first = arr[0];
    sort(arr + 1, arr + n);
    while (arr[0] <= arr[n - 1])
    {
        arr[0]++, arr[n - 1]--;
        sort(arr + 1, arr + n);
    }
    cout << arr[0] - first << endl;

    return 0;
}