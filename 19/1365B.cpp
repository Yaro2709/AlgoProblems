#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

int main()
{
    ll t = 1, x = 1, i, j; cin >> t;
    while (t--) {
        ll n, i, n1, j = 0, k = 1e17, m = 1, ct = 0, x = 1, y;
        cin >> n; 
        ll *a = new ll[n]; 
        ll *b = new ll[n];
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < n; i++) { cin >> b[i]; if (b[i]) ct++; else j++; }
        if (is_sorted(a, a + n)) { cout << "YES\n"; continue; }
        if (j && ct) cout << "YES\n"; else cout << "NO\n";

        delete[] a;
        delete[] b;
    }
    return 0;
}