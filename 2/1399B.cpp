#include<iostream>
 
using namespace std;
 
int long long a[2002], b[2002];
 
int main() 
{
    int t;
    cin >> t;
 
    for (int j = 1; j <= t; j++) 
    {
        int n;
        cin >> n;
 
        int long long bmin = LLONG_MAX;
        int long long amin = LLONG_MAX;
        int long long ans = 0;
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i], amin = min(amin, a[i]);
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i], bmin = min(bmin, b[i]);
        }
 
        for (int i = 1; i <= n; i++) {
            ans += max(a[i] - amin, b[i] - bmin);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}