#include<iostream>

using namespace std;

int a[200500];
int b[200500];
int mx = 0;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] * n == sum)
            b[mx++] = i;
    }
    cout << mx << endl;
    for (int i = 0; i < mx; ++i)
        cout << b[i] + 1 << ' ';

    return 0;
}