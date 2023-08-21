#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> p, q;

        for (int i = 0; i < 2 * n; i++) {
            int x, y;
            cin >> x >> y;

            if (x == 0)q.push_back(abs(y));
            else p.push_back(abs(x));
        }
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());
        double ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (sqrt((p[i] * p[i]) + (q[i] * q[i])));

        }
        cout << fixed << setprecision(15) << ans << endl;

    }
    return 0;
}