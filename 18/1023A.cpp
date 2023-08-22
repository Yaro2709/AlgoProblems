#include<iostream>

using namespace std;

bool ans(string str1, string str2, int n, int m) {
    int i = 0;
    while (i < n && i < m) {
        if (str1[i] == str2[i]) i++;
        if (str1[i] == '*') break;
        if (str1[i] != str2[i]) return false;
    }
    int j = n - 1, k = m - 1;
    while (j > i) {
        if (str1[j] != str2[k]) return false;
        j--; k--;
    }
    if (k >= i - 1) return true;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    string str1, str2;
    cin >> str1;
    cin >> str2;

    if (ans(str1, str2, n, m)) cout << "YES";
    else cout << "NO";
    return 0;
}