#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, c, d;
        cin >> a >> b >> c;
        d = a + b + c - 1;
        cout << d << endl;
    }

    return 0;
}