#include<iostream>
#include<vector>

using namespace std;

#define ll long long int
#define M 100100

ll a[M];

int main()
{
    ll n, k;
    cin >> n >> k;
    ll sum = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
    ll seg = sum / k;
    vector<ll> ans;
    ans.push_back(0);
    sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        if (sum == seg) {
            ans.push_back(i);
            sum = 0;
        }
        else if (sum > seg) {
            cout << "No\n";
            return 0;
        }
    }
    if (sum) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
        for (int i = 1; i < ans.size(); i++) {
            cout << (ans[i] - ans[i - 1]) << " ";
        }
    }

    return 0;
}