#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int a, b;
    int st, ans;
    for (char c : s) if (c == '(') a++; else b++;
    if (a != b) { cout << "-1"; return 0; }
    int cur = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '(') cur++;
        else cur--;
        if (cur < 0 and !st) st = i;
        else if (cur >= 0 and st) ans += i - st + 1, st = 0;
    }
    cout << ans;

    return 0;
}