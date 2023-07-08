#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string* n1 = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> n1[i];
    }
    string* m1 = new string[m];
    for (int i = 0; i < m; i++) {
        cin >> m1[i];
    }

    int q;
    cin >> q;
    while (q--) {
        long long int y;
        cin >> y;
        cout << n1[(y - 1) % n] + m1[(y - 1) % m] << endl;
    }

    return 0;
}