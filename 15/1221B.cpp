#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool p = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            j % 2 == p ? cout << "W" : cout << "B";
        }
        cout << "\n";
        p = !p;
    }
    return 0;
}