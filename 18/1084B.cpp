#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int main() {
    ll n, s;
    cin >> n >> s;
    vector <ll> arr(n);
    ll sum = 0;
    ll minm = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        minm = min(arr[i], minm);
    }
    if (sum < s)
        cout << -1;
    else {
        cout << min(minm, (sum - s) / n);
    }

    return 0;
}