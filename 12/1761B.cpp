#include <iostream>
#include <set>

using namespace std;

int main()
{
    int  t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(a[i]);
        }
        int ans = n;
        if (s.size() == 2) {
            ans = 2 + (n - 2) / 2;
        }
        cout << ans << "\n";
    }

    return 0;
}