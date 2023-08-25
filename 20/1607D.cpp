#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() {
    int n; cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    vector<int>blue, red;
    for (int i = 0; i < n; i++) {
        char ch; 
        cin >> ch;
        if (ch == 'B')blue.push_back(arr[i]);
        else red.push_back(arr[i]);
    }
    sort(blue.begin(), blue.end());
    sort(red.rbegin(), red.rend());
    bool ans = true;
    for (int i = 0; i < blue.size(); i++)if (blue[i] < i + 1)ans = false;
    for (int i = 0; i < red.size(); i++)if (red[i] > n - i)ans = false;

    cout << (ans ? "YES" : "NO") << endl;

    delete[] arr;
}

int main() {
    int t; 
    cin >> t; 
    while (t--)
        solve();

    return 0;
}