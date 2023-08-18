#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        long long int cur = 1, count = 0;
        while (cur < k) {
            cur = cur * 2;
            count++;
        }
        long long int ans = count + ((n - cur + k - 1) / k);

        cout << ans << endl;
    }

    return 0;
}