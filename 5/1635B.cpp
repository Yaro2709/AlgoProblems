#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (auto& i : arr)cin >> i;
        int ans = 0;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                arr[i + 1] = arr[i];
                if (i < n - 2) {
                    arr[i + 1] = max(arr[i + 1], arr[i + 2]);
                }
                ans++;
            }
        }

        cout << ans << endl;
        for (auto i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}