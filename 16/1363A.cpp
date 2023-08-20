#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e6;
typedef long long ll;
ll a[N];

#define FOR(i,a,b) for(int i=a;i<=b;i++)

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, sum = 0;
        cin >> n >> x;
        FOR(i, 1, n)
        {
            cin >> a[i];
            a[i] %= 2;
            sum += a[i];
        }
        sort(a + 1, a + 1 + n);
        if (sum == 0) cout << "No" << endl;
        else if (sum == n)
        {
            if (x % 2) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else if (!(sum % 2) && n == x) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}