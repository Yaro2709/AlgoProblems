#include <iostream>

using namespace std;

int main() 
{
    int t;;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m, k;
        cin >> n >> m >> k;

        if ((n - 1) + (m - 1) * n == k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}