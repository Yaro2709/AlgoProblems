#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string color = "BGR";
    int ans = 1e9;
    string res = "";
    do {
        int cnt = 0;
        string t = "";
        for (int i = 0; i < n; i++) {
            t += color[i % 3];
            if (t[i] != s[i])
                cnt++;
        }
        if (ans > cnt) {
            ans = cnt;
            res = t;
        }
    } while (next_permutation(color.begin(), color.end()));
    cout << ans << endl;
    cout << res << endl;
    return 0;
}