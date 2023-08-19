#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    int Q;
    cin >> Q;
    while (Q--) {
        string s;
        cin >> s;
        ll n = s.size();
        ll mx = 0;
        ll tmp = 0;
        s = s + s;
        ll i = 0;
        while (i < s.size())
        {
            tmp = 0;
            while (s[i] == '1' && tmp < n)
            {
                tmp++;
                i++;
            }
            mx = max(mx, tmp);
            i++;
        }

        if (mx == n) { cout << n * n << endl; continue; }
        cout << ((mx + 2) / 2) * ((mx + 1) / 2) << endl;
    }

    return 0;
}