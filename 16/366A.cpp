#include<iostream>

using namespace std;

const int N = 4 + 10;
int a[N][N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    for (int i = 0; i < 4; i++) {
        int x = min(a[i][0], a[i][1]), y = min(a[i][2], a[i][3]);
        if (x + y <= n) {
            cout << i + 1 << " " << x << " " << n - x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}