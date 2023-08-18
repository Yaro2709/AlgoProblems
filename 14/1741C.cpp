#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
        }
        int ans = n;
        int num = n;
        while (n > 0) {

            if (sum % n == 0) {
                int x = sum / n;
                int k = 0, c = 0, z = 0;
                int a = 0, b = 0;
                for (int i = 0; i < num; i++) {
                    k += ar[i];
                    b++;
                    if (k == x) {
                        k = 0;
                        a = max(b, a);
                        b = 0;
                        if (i == num - 1)
                            z++;
                    }
                    else if (k > x)
                        break;
                }
                if (z == 1) ans = min(ans, a);
            }
            n--;
        }
        cout << ans << "\n";
    }

    return 0;
}