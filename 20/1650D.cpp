#include<iostream>
#include<vector>

using namespace std;

const int MAXN = 2e3 + 7;
int a[MAXN];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>ans;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            a[x] = i;
        }
        for (int i = n; i >= 1; i--) {
            int x = a[i] % i; ans.push_back(x);
            for (int j = i; j > 1; j--) {
                a[j] = (a[j] + i - x - 1) % i + 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}