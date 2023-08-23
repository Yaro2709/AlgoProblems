#include<iostream>

using namespace std;

int v[50][50];
int c[51][51];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            c[i + 1][j + 1] = v[i][j] - c[i][j] + c[i][j + 1] + c[i + 1][j];


    int a, b;
    cin >> a >> b;
    int ans = a * b;
    for (int i = a; i <= n; i++)
        for (int j = b; j <= m; j++) {
            int sum = c[i][j] - c[i - a][j] - c[i][j - b] + c[i - a][j - b];
            ans = min(ans, sum);
        }

    for (int i = b; i <= n; i++)
        for (int j = a; j <= m; j++) {
            int sum = c[i][j] - c[i - b][j] - c[i][j - a] + c[i - b][j - a];
            ans = min(ans, sum);
        }

    cout << ans << endl;

    return 0;
}