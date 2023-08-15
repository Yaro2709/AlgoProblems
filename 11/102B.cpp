#include <iostream>
#include <string>

using namespace std;

#define ll long long int

int main()
{
    string s; cin >> s;
    ll n = s.length();
    ll sum = 0, ans = 0;
    while (n != 1)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += s[i] - '0';
        s = to_string(sum);
        n = s.length();
        ans++;
    }
    cout << ans;

    return 0;
}