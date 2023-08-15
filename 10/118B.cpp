#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int col = 2 * n + 1;
    int copy = n;
    while (col--) {
        for (int j = 0; j < 2 * abs(copy); j++) {
            cout << ' ';
        }
        int i;
        for (i = 0; i <= abs(abs(copy) - n); i++) {
            cout << i;
            if ((abs(abs(copy) - n) != 0)) cout << ' ';

        }

        i -= 2;
        for (i; i >= 0; i--) {
            cout << i;
            if ((i != 0))cout << ' ';
        }

        copy--;
        cout << endl;
    }

    return 0;
}