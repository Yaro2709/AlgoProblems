#include<iostream>

using namespace std;

void solve()
{
    string s; cin >> s;
    int n = s.size();
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')a++;
        if (s[i] == 'b')b++;
        if (s[i] == 'c')c++;

    }
    if (a == 0 || b == 0)
    {
        cout << "NO";
        return;
    }
    if (c != a && c != b) {
        cout << "NO";
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] < s[i]) {
            cout << "NO";
            return;
        }

    }
    cout << "YES";
}

int main()
{
    solve();

    return 0;
}
}