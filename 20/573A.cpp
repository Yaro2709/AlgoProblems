#include<iostream>

using namespace std;

int a[100001];

int sol(int x) {
    while (x % 3 == 0)x /= 3;
    while (x % 2 == 0)x /= 2;
    return x;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a[i] = sol(x);
    }
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i + 1]) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}