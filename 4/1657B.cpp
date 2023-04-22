#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, b, x, y;
        cin >> n >> b >> x >> y;

        int res = 0; 
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (res + x <= b) {
                res += x;
            }
            else {
                res -= y;
            }
            ans += res;
        }
        cout << ans << endl;
    }

    return 0;
}