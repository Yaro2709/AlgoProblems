#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        int k;
        cin >> k;
        for (int i = 0; i < n; i++) cin >> arr[i];
        int x = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) x++;
        }
        int ans = (n - x + k) / k;
        cout << ans << endl;

        delete[] arr;
    }

    return 0;
}