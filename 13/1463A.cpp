#include<iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, c, min = 0; 
        cin >> a >> b >> c;
        int sum = a + b + c;
        min = a;
        if (a > b) min = b;
        if (min > c) min = c;
        if (sum % 9 == 0 and sum / 9 <= min) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}