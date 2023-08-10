#include<iostream>

using namespace std;

int main() {
    int x; 
    cin >> x;
    if (x % 2 == 0) {
        cout << (x / 2) * x << endl;
    }
    else {
        cout << ((x * x) + 1) / 2 << endl;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i % 2 == j % 2) {
                cout << 'C';
            }
            else {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}