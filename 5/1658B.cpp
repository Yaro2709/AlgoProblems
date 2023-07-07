#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        if (n % 2 == 1) { 
            cout << 0 << endl; 
            continue; 
        }
        long long int ans = 1;
        long long int MOD = 998244353;
        for (int i = 1; i <= n / 2; i++) {
            ans = (ans * i) % MOD;
        }
        ans = (ans * ans) % MOD;
        cout << ans << endl;
    }

    return 0;
}