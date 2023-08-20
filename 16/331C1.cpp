#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    long long n, a[18] = { 0 }, b, c, d = 0;
    cin >> n;
    while (n > 9) {
        c = 10;
        for (b = 0; b < 18; b++) {
            a[b] = n % c / (c / 10);
            c = c * 10;
        }
        sort(a, a + 18);
        n = n - a[17];
        d++;
    }
    if (n != 0) cout << d + 1;
    else cout << "0";

    return 0;
}