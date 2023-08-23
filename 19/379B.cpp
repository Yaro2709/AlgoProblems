#include<iostream>

using namespace std;

int main() {
    int i, n, a;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        if (i != n - 1) {
            while (a > 0) {
                cout << "PRL";
                a--;
            }
            printf("R");
        }
        else {
            while (a > 0) {
                cout << "PLR";
                a--;
            }
        }
    }
    cout << endl;
    return 0;
}