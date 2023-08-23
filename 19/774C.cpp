#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++)
            cout << 1;
    }
    else {
        cout << 7;
        for (int i = 0; i < (n - 3) / 2; i++) {
            cout << 1;
        }
    }

    return 0;
}