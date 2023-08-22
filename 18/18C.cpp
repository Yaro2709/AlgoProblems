#include<iostream>

using namespace std;

int s[100000];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        s[i] += s[i - 1];
    }
    int res = 0;
    for (int i = 1; i < n; ++i) {
        res += (s[i] == (s[n] - s[i]));
    }
    cout << res;

    return 0;
}