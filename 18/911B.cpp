#include<iostream>

using namespace std;

int main() {
    int n, a, b;
    int maxi = -1;
    cin >> n >> a >> b;
    for (int i = 1; i < n; i++) {
        int hi = min(a / i, b / (n - i));
        maxi = max(maxi, hi);
    }
    cout << maxi << endl;

    return 0;
}