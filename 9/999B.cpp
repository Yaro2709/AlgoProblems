#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int n, i;
    string t;
    cin >> n >> t;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            reverse(t.begin(), t.begin() + i);
        }
    }
    cout << t;

    return 0;
}