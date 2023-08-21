#include<iostream>

using namespace std;

int main() {
    int n;  
    cin >> n;
    if (n % 2) {
        cout << "YES" << endl;
        cout << 1 << " ";
        int ans = 0;

        for (int i = 1; i <= n / 2; i++) {
            cout << 4 * i << " " << (4 * i) + 1 << " ";
        }
        for (int i = 1; i <= n / 2; i++) {
            cout << (4 * i) - 2 << " " << (4 * i) - 1 << " ";
        }

        cout << 2 * n << endl;
    }
    else cout << "NO" << endl;

    return 0;
}