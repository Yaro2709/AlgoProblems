#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            p[i] = i;
        }

        for (int i = n; i >= 2; i -= 2) {
            swap(p[i], p[i - 1]);
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " \n"[i == n];
        }
    }

    return 0;
}