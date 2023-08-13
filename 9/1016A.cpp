#include <iostream>

using namespace std;

int main() {

    int n = 0, m = 0, a = 0, cur = 0, tot = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << (a + tot) / m << ' ';
        tot = (a + tot) % m;
    }

    return 0;
}