#include<iostream>

using namespace std;

int main() {
    char a[9][9];
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> a[i][j];
        }
    }
    int A = 8, B = 1;
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (a[j][i] == 'W') {
                int k;
                for (k = j - 1; k >= 1; k--) {
                    if (a[k][i] != '.')break;
                }
                if (k == 0)A = min(A, j);
            }
            if (a[j][i] == 'B') {
                int z;
                for (z = j + 1; z <= 8; z++) {
                    if (a[z][i] != '.')break;
                }
                if (z == 9)B = max(B, j);
            }
        }
    }

    if (A - 1 <= 8 - B)cout << 'A';
    else cout << 'B';

    return 0;
}