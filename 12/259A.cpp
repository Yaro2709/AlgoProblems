#include <iostream>

using namespace std;

int main() {
    string s;
    for (int i = 1; i <= 9; i++) {
        cin >> s;
        if (s != "WBWBWBWB" && s != "BWBWBWBW") {
            cout << "NO" << endl;
            return 0;
        }

    }
    cout << "YES" << endl;

    return 0;
}