#include <iostream>

using namespace std;

int main()
{
    int t, n, a[200005];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) {
            int c = 1, u = i;
            while (i != a[u]) {
                u = a[u];
                c++;
            }
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}