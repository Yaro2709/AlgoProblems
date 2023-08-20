#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cin >> n; cout << n;
    }
    else
        if (n == 2) {
            int n2;
            cin >> n >> n2;
            cout << min(n, n2);
        }
        else
        {
            int m[1000];
            int x;
            cin >> m[0];
            cin >> x;
            m[1] = min(x, m[0]);
            for (int i = 2; i < n; i++) {
                cin >> x;
                m[i] = min(x, max(m[i - 1], m[i - 2]));
            }
            cout << m[n - 1];
        }
    return 0;
}