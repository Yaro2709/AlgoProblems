#include<iostream>

using namespace std;

int main() {

    int n, s = 1, a;
    cin >> n >> a;
    if (a % 2 == 0) {
        s += (n - a) / 2;
    }
    else {
        s += (a - 1) / 2;
    }
    cout << s;

    return 0;
}