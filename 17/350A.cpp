#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
    int *a = new int[n];
    int *b = new int[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int x = *min_element(a, a + n);
    int y = *max_element(a, a + n);
    int z = *min_element(b, b + m);
    if (max(2 * x, y) < z) cout << max(2 * x, y);
    else cout << -1;

    delete[]a;
    delete[]b;

    return 0;
}