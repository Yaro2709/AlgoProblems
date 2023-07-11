#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    char ch = s[0];
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] < ch) {
            ch = s[i];
        }
        if (s[i] == ch) {
            pos = i;
        }
    }
    cout << s[pos];
    for (int i = 0; i < n; i++) {
        if (i != pos) {
            cout << s[i];
        }
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)  solve();

    return 0;
}