#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2)
        cout << -1;
    else {
        cout << n - 1 << ' ' << n;
        for (int i = 1; i <= n - 2; i++)
            cout << ' ' << i;
    }
    return 0;
}