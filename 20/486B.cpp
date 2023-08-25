#include<iostream>

using namespace std;

int main() {
    long long n, m, i, j, k;
    cin >> n >> m;
    int a[110][110], b[110][110];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i][j] = 1;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                for (int k = 0; k < n; k++)b[k][j] = 0;
                for (int k = 0; k < m; k++)b[i][k] = 0;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int t = 0;
            for (int k = 0; k < n; k++)t |= b[k][j];
            for (int k = 0; k < m; k++)t |= b[i][k];
            if (t != a[i][j]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}