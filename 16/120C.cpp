#include<iostream>

using namespace std;

int mas[105], n, i, k, z = 0;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> mas[i];
    }

    for (i = 1; i <= n; i++) {
        if (mas[i] >= (3 * k)) {
            z += mas[i] - (3 * k);
        }
        else z += mas[i] % k;
    }
    cout << z;

    return 0;
}