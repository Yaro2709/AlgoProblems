#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long int c, sum;
        cin >> c >> sum;
        cout << (long long int)(sum / c) * (sum / c) * (c - sum % c) + ((sum / c) + 1) * ((sum / c) + 1) * (sum % c) << endl;
    }

    return 0;
}