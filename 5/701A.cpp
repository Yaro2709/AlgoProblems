#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    s /= n / 2;

    bool* ok = new bool[n];
    for (int i = 0; i < n; i++) {
        if (!ok[i]) {
            ok[i] = 1;
            for (int j = i + 1; j <= n; j++) {
                if (a[i] + a[j] == s && !ok[j]) {
                    ok[j] = 1;
                    cout << i << ' ' << j << endl;
                    break;
                }
            }
        }
    }

    delete[] a;
    delete[] ok;

    return 0;
}