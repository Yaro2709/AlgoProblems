#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q, m;
    cin >> n;
    int *arr = new int[n + 1];
    long long int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr + 1, arr + n + 1);

    cin >> m;
    while (m--) {
        cin >> q;
        cout << sum - arr[n - q + 1] << "\n";
    }

    delete[] arr;

    return 0;
}