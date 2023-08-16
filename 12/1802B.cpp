#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *b = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int ans = 0;
        int cnt = 0;
        int z = 0;
        int prev = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) {
                z++;
                if (prev + z > ans) {
                    ans++;
                }
                cnt++;
            }
            else {
                prev = cnt / 2 + 1;
                z = 0;
            }
        }
        cout << ans << endl;

        delete[] b;
    }

    return 0;
}