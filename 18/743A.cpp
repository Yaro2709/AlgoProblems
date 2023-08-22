#include<iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n >> i >> j;
    string s;
    cin >> s;
    if (s[i - 1] == s[j - 1])cout << 0;
    else cout << 1;

    return 0;
}