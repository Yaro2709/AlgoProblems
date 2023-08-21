#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long int *arr = new long int[4 * n];
        for (int i = 0; i < 4 * n; i++) cin >> arr[i];
        sort(arr, arr + 4 * n);
        long int area = arr[0] * arr[4 * n - 1], ans = 0;
        for (int i = 0, j = 4 * n - 1; i < j; i = i + 2, j = j - 2) {
            if (arr[i] == arr[i + 1] && arr[j] == arr[j - 1] && arr[i] * arr[j] == area) {
                ans++;
            }
        }
        if (ans == n) cout << "YES\n";
        else cout << "NO\n";

        delete[] arr;
    }
    return 0;
}