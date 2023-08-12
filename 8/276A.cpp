#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x = -2e9;

    while (n--) {
        int f, t;
        cin >> f >> t;
        if (t > k)
            f = f - (t - k);

        x = max(x, f);
    }

    cout << x << endl;

    return 0;
}