#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        int *a = new int[n];
        for (int i = 0; i < n; i++)cin >> a[i];
        sort(a, a + n);
        int cnt = 1;
        long long shift = r;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] == a[i + 1])continue;
            if (a[i] - shift <= 0)break;
            cnt++;
            shift += r;
        }
        cout << cnt << "\n";

        delete[] a;
    }

    return 0;
}