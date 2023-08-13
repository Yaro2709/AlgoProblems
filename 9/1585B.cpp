#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int temp = a[n];
    int sum = 0;
    for (int i = n; i >= 1; i--) {
        if (a[i] > temp) {
            temp = a[i], sum++;
        }
    }
    cout << sum << endl;

    delete[] a;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        solve();
    }
    return 0;
}