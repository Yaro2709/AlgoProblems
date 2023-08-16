#include <iostream>
#include <algorithm>

using namespace std;

int a[200005];

void test() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i]++;
    }
    sort(a + 1, a + 1 + n);
    int ans = a[1] > 1;
    for (int i = 1; i <= n; i++) {
        ans += i >= a[i] && (i == n || i + 1 < a[i + 1]);
    }
    cout << ans << '\n';
}

int main()
{
    int T;
    cin >> T;
    while (T--) test();

    return 0;
}