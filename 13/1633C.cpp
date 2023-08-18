#include<iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        long long int k, w, a, r = 0;
        cin >> k >> w >> a;
        for (long long int i = 0; i <= k; i++) {
            long long int p = (hc + (k - i) * a) / dm;
            long long int q = hm / (dc + i * w);
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