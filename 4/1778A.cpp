#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int s = 0;
        vector<int> arr(n);
        for (int& e : arr) {
            cin >> e;
            s += e;
        }

        int ans = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, s - 2 * (arr[i + 1] + arr[i]));
        }

        cout << ans << endl;
    }

    return 0;
}