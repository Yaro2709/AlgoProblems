#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        int *arr = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        sort(arr, arr + n);

        int out = 0;
        for (int j = 1; j < n; j++) {
            out = out + (k - arr[j]) / arr[0];
        }
        cout << out << endl;

        delete[] arr;
    }
    return 0;
}