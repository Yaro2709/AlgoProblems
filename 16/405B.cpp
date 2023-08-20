#include<iostream>

using namespace std;

int main()
{
    int n, ind = -1, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    bool st = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L' && st) { ans = 0; continue; }
        if (s[i] == 'R' && st) {
            st = 0;
            ind = i;
            continue;
        }
        if (s[i] == 'L' && !st) {
            if ((i - ind - 1) % 2 == 1)ans++;
            st = 1;
            continue;
        }
        if (st) { ans++; }


    }
    cout << ans;

    return 0;
}