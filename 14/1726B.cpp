#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n > m || (n % 2 == 0 && m % 2 != 0)) cout << "NO\n";
        else {
            cout << "YES\n";
            if (n % 2 == 0) {
                for (int i = 0; i < n - 2; i++) cout << 1 << " ";
                for (int i = 0; i < 2; i++) cout << (m - n + 2) / 2 << " ";
            }
            else {
                for (int i = 0; i < n - 1; i++) cout << 1 << " ";
                cout << m - n + 1;
            }
            cout << endl;
        }
    }
    return 0;
}