#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, i, s;
        cin >> n;
        s = (n - 1) * 2;
        if (n == 1) cout << -1 << endl;
        else {
            for (i = 0; i < (n - 2); i++) cout << 2;
            if (s % 3 == 0) cout << 33 << endl;
            else cout << 23 << endl;
        }
    }

    return 0;
}