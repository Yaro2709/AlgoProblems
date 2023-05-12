#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        int sum = s;
        int maxm = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            maxm = max(maxm, x);
            sum += x;
        }
        
        int i = 1;
        int ans = 0;
        while (ans < sum) {
            ans += i;
            i++;
        }
       
        if (ans == sum && i > maxm) cout << "YES" << "\n";
        else                        cout << "NO" << "\n";
    }

    return 0;
}