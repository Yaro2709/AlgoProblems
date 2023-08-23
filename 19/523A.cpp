#include<iostream>

using namespace std;

int A[200][200], B[200][200];

int main() {
    char c;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == '*') A[i][j] = 1;
            else A[i][j] = 0;
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[j][n - i - 1] = A[i][j];
        }
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][n - j - 1] = B[i][j];

    for (int i = 0; i < m * 2; i++) {
        for (int j = 0; j < n * 2; j++)
            if (A[i / 2][j / 2] == 1) cout << "*";
            else cout << ".";
        cout << endl;
    }

    return 0;
}