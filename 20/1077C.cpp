#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long int a[200010];
long long int t[1000010];

int main() {
    long long int n;
    cin >> n;
    long long int ma = 0, sum = 0;
    for (long long int i = 1; i <= n; i++) {
        cin >> a[i];
        t[a[i]]++;
        sum += a[i];
        ma = max(ma, a[i]);
    }
    long long int cnt = 0;
    vector <long long int> ans;
    for (long long int i = 1; i <= n; i++) {
        long long int x = sum - a[i];
        if (x % 2) continue;
        x /= 2;
        if (x <= ma && (x != a[i] && t[x]) || (x == a[i] && t[x] - 1)) {
            ans.push_back(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    for (long long int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    return 0;
}