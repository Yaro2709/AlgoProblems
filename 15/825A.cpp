#include<iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    s += '0', n += 1;

    int cntOnes = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cout << cntOnes;
            cntOnes = 0;
        }
        else cntOnes += 1;
    }
    return 0;
}