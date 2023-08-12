#include <iostream>

using namespace std;

int main() {
    int n, temp, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (i == j || i == n / 2 || j == n / 2 || i + j == n - 1) {
                sum += temp;
            }
        }
    }
    cout << sum;

    return 0;
}