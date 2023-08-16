#include <iostream>

using namespace std;

int main() {
    long long int n, mn, temp;
    mn = 1000;
    string s;
    cin >> n;
    cin >> s;
    for (long long int i = 0; i < n - 3; i++) {
        temp = min(26 - abs(s[i] - 'A'), abs(s[i] - 'A'))
            + min(26 - abs(s[i + 1] - 'C'), abs(s[i + 1] - 'C'))
            + min(26 - abs(s[i + 2] - 'T'), abs(s[i + 2] - 'T'))
            + min(26 - abs(s[i + 3] - 'G'), abs(s[i + 3] - 'G'));
        if (temp < mn)
            mn = temp;
    }
    cout << mn;

    return 0;
}