#include <iostream>

using namespace std;

int main() {
    long long int a, b, c[100000], m, n, s;
    cin >> s >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        c[a] += b;
        if (m < a)m = a;
    }
    for (int i = 1; i <= m; i++)
        if (s > i)s = s + c[i];

    if (s > m)cout << "YES";
    else cout << "NO";

    return 0;
}