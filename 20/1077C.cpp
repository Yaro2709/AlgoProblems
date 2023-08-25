#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[200010];
int t[1000010];

int main() {
    int n;
    cin >> n;
    int ma = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        t[a[i]]++;
        sum += a[i];
        ma = max(ma, a[i]);
    }
    int cnt = 0;
    vector <int> ans;
    for (int i = 1; i <= n; i++) {
        int x = sum - a[i];
        if (x % 2) continue;
        x /= 2;
        if (x <= ma && (x != a[i] && t[x]) || (x == a[i] && t[x] - 1)) {
            ans.push_back(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    return 0;
}