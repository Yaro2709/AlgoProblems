#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (k == 1) {
            cout << (n - 1) / 2 << endl;
        }
        else {
            int ans = 0;
            for (int i = 1; i < n - 1; i++) {
                if (v[i] > v[i - 1] + v[i + 1]) {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}