#include <iostream>

using namespace std;

int main()
{
    long long int t, a, b, n, s;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n >> s;
        if (s % n <= b && a * n + b >= s) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}