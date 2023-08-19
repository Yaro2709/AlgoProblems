#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, maxi = -1, mini = 1e9 + 7;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            maxi = max(maxi, a);
            mini = min(mini, b);
        }
        cout << max(maxi - mini, 0) << endl;
    }

    return 0;
}