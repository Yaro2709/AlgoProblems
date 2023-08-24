#include<iostream>

using namespace std;

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    int k = -1;
    for (int i = 1; i < S.size(); i++) {
        if ((S[i] - '0') % 2 == 0) {
            if (k < 0 || S[i] <= S[0]) {
                k = i;
            }
        }
    }
    if (k >= 0) {
        swap(S[0], S[k]);
        reverse(S.begin(), S.end());
        cout << S << '\n';
    }
    else {
        cout << -1 << '\n';
    }

    return 0;
}