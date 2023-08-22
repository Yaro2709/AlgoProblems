#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = -1;
        for (int i = 1; i <= n; i++) {
            int mx = 0, sum = 0;
            int total = n;
            for (int j = i; j <= n; j++) {
                sum += (total * j);
                mx = max(mx, (total * j));
                total--;
            }
            for (int j = 1; j < i; j++) {
                sum += (j * j);
                mx = max(mx, (j * j));
            }
            ans = max(ans, sum - mx);
        }
        cout << ans << endl;
    }
    return 0;
}