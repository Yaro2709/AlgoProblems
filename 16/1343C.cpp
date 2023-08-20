#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long ans = 0;
        for (int i = 0; i < n;)
        {
            int mi = INT_MIN;
            int ma = INT_MIN;
            int ne = 0;
            int po = 0;
            while (i < n && v[i] < 0)
            {
                if (v[i] > mi) {
                    mi = v[i];
                }
                ne = 1;
                i++;
            }
            if (ne == 1) ans += mi;
            while (i < n && v[i] > -1)
            {
                if (v[i] > ma)
                {
                    ma = v[i];
                }
                i++;
                po = 1;
            }
            if (po == 1) ans += ma;
        }
        cout << ans << endl;
    }

    return 0;
}