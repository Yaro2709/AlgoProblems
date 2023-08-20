#include<iostream>

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0') cnt++;
    }
    if (cnt == 0) cout << "DRAW\n";
    else if ((cnt & 1) && cnt > 1) cout << "ALICE\n";
    else cout << "BOB\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}