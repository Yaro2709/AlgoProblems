#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, ptr1 = 0, ptr2 = 0, a = 0, b = 0;
        bool z;
        cin >> n >> m >> k;
        string str1, str2;
        cin >> str1 >> str2;

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        string ans;
        for (int i = 0; i < n + m; i++) {
            if (ptr1 == n || ptr2 == m)
                break;
            z = str1[ptr1] < str2[ptr2];
            if (z && a == k)
                z = 0;
            else if (!z && b == k)
                z = 1;
            if (z) {
                ans += str1[ptr1];
                ptr1++, b = 0, a++;
            }
            else {
                ans += str2[ptr2];
                ptr2++, a = 0, b++;
            }
        }
        for (int i = 0; i < ans.length(); i++) {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}