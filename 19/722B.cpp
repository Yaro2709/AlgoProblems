#include<iostream>
#include<string>

using namespace std;

#define N 102

int main()
{
    int n, p[N];
    string s;
    bool ok = true;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> p[i];
    getline(cin, s);
    for (int i = 1; i <= n; ++i)
    {
        getline(cin, s);
        int d = 0;
        for (int j = 0; j < s.size(); ++j)
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'y')
                ++d;
        ok = ok & (d == p[i]);
    }
    if (ok) cout << "YES"; else cout << "NO";

    return 0;
}