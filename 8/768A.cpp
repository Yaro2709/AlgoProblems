#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[0] < a[i] && a[i] < a[n - 1]) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}