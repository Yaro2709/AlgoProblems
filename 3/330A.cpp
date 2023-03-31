#include<iostream>

using namespace std;

char a[21][21];

int main()
{
    int i, j, n, m, sum = 0, t = 0;
    cin >> n >> m;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++) {
            if (a[i][j] == 'S') {
                break;
            }
        }

        if (j == m + 1) {
            sum += m;
            t++;
        }
    }

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (a[j][i] == 'S') {
                break;
            }
        }

        if (j == n + 1) {
            sum += n - t;
        }
    }

    cout << sum << endl;

    return 0;
}