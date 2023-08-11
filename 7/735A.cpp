#include<iostream>

using namespace std;

int main() {
    int n, k, b, e;
    string str;
    cin >> n >> k >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'T')e = i;
        if (str[i] == 'G')b = i;
    }
    if (e < b)k *= -1;
    for (int i = b; i < n && i >= 0; i += k) {
        if (str[i] == '#') {
            cout << "NO";
            return 0;
        }
        if (i == e) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}