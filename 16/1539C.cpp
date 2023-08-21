#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<long long > v;
    for (int i = 0; i < n - 1; i++) {
        if ((arr[i + 1] - arr[i]) > x) {
            v.push_back(arr[i + 1] - arr[i]);
        }
    }
    long long p;
    p = v.size() + 1;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if ((k - (v[i] - 1) / x) < 0) {
            break;
        }
        else {
            k = k - (v[i] - 1) / x;
            p = p - 1;
        }
    }
    cout << p << endl;

    delete[] arr;

    return 0;
}