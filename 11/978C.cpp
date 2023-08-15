#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long int i, a[1000000], b[1000000], j = 0, s = 0;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < m; i++) {
        cin >> b[i];
        while (a[j] + s < b[i]) s += a[j++];
        cout << j + 1 << " " << b[i] - s << endl;
    }
    return 0;
}