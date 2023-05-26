#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long int *arr = new long long int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        long long ans = arr[n - 1];
        for (int i = n - 2; i >= 0 && k; i--, k--) {
            ans += arr[i];
        }
        cout << ans << endl;

        delete[] arr;
    }

    return 0;
}