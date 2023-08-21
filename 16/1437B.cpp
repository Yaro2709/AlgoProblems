#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        if (s[n - 1] == s[0])ans++;
        for (int i = 0; i < n; i++)
            ans += s[i] == s[i + 1];

        cout << ans / 2 << "\n";
    }

    return 0;
}