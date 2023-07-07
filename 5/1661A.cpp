#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int s = 0;
        for (int i = 0; i < n - 1; i++) {
            int x = abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
            int y = abs(a[i] - b[i + 1]) + abs(b[i] - a[i + 1]);
            s += min(x, y);
        }
        cout << s << endl;
    }

    return 0;
}