#include<iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n, i;
    string s;
    cin >> n >> s;
    for (i = 0; i < n; ++i) {
        if (s[i] == '0' && s[i - 1] != '1' && s[i + 1] != '1' || s[i - 1] == s[i] && s[i] == '1') {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}