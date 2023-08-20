#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll one = -1, zero = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && one < 0)
                one = i;
            else if (s[i] == '0' && one >= 0) zero = i;
        }
        if (one >= 0 && zero >= 0) {
            for (int i = 0; i < n; i++) {
                if (one > i || i >= zero) cout << s[i];
                else if (i == one) i = zero - 1;
            }
            cout << "\n";
        }
        else cout << s << "\n";
    }
    return 0;
}