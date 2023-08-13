#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, c;
        vector<int>arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        a = arr[0], b = arr[1], c = arr[2];
        int ans = 0;
        if (a > 0)a--, ans++;
        if (b > 0)b--, ans++;
        if (c > 0)c--, ans++;
        if (a > 0 && b > 0)a--, b--, ans++;
        if (a > 0 && c > 0)a--, c--, ans++;
        if (c > 0 && b > 0)c--, b--, ans++;
        if (a > 0 && b > 0 && c > 0)a--, b--, c--, ans++;
        cout << ans << endl;
    }

    return 0;
}