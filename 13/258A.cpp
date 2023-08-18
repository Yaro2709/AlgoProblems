#include<iostream>

using namespace std;

int main() {
    string b;
    cin >> b;
    int f = 0;
    for (int i = 0; i < b.length(); i++) {
        if ((b.at(i) == '0') && (f == 0)) {
            f = 1;
            continue;
        }
        if ((f == 0) && (i == b.length() - 1)) { continue; }
        cout << b.at(i);
    }

    return 0;
}