#include <iostream>

using namespace std;

void solve() {
    const int A = 1;
    const int B = 2;

    int a;
    cin >> a;
    int b;
    cin >> b;
    if(a == 0){
        cout << 1 << endl;
    }
    else {
        cout << ((a * A + b * B) + 1) << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}