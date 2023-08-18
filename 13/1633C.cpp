#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        int k, w, a, r = 0;
        cin >> k >> w >> a;
        for (int i = 0; i <= k; i++) {
            int p = (hc + (k - i) * a) / dm;
            int q = hm / (dc + i * w);
            if ((hc + (k - i) * a) % dm != 0) p++;
            if (hm % (dc + i * w) != 0) q++;
            if (p >= q) {
                r = 1;
                break;
            }
        }
        if (r == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}