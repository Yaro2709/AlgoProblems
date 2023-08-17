#include<iostream>

using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    for (int times = 0; times < T; times++) {
        cin >> a >> b;
        if (a > b) {
            swap(a, b);
        }

        cout << min(a, (a + b) / 3) << "\n";
    }
    return 0;
}