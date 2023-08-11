#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2], b[2];
        b[0] = 0, b[1] = 0;
        a[0] = 0, a[1] = 0;
        int i = 1, k = 1;
        while (n) {
            if (i > n)i = n;
            if (k) {
                a[1] += i / 2;
                a[0] += i - i / 2;
            }
            else {
                b[1] += i - i / 2;
                b[0] += i / 2;
            }
            n -= min(n, i);
            i += 4;
            k = 1 - k;

        }cout << a[0] << " " << a[1] << " " << b[0] << " " << b[1] << endl;

    }
    
    return 0;
}