#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        pair<int, int>a[100000];
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            x %= k;
            if (x == 0)x += k;
            a[i] = { -x,i + 1 };
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)cout << a[i].second << " "; cout << "\n";
    }

    return 0;
}