#include<iostream>
#include<vector>

using namespace std;

int arr[107];
int brr[107];

void solve() {
    int n;
    cin >> n;

    int sum1 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum1 += arr[i];
    }

    int sum2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> brr[i];
        sum2 += brr[i];
    }

    if (sum1 != sum2) {
        cout << -1 << endl;
        return;
    }

    vector<int> a, b;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < brr[i]) {
            for (int j = 0; j < brr[i] - arr[i]; ++j) {
                b.push_back(i);
            }
        }
        else if (arr[i] > brr[i]) {
            for (int j = 0; j < arr[i] - brr[i]; ++j) {
                a.push_back(i);
            }
        }
    }

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] + 1 << " " << b[i] + 1 << endl;
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}