#include<iostream>

using namespace std;

int main()
{
    int n, i, l, p;
    string a, s1;
    cin >> n >> p;
    cin >> a;
    s1 = a;
    l = 0;
    if (p + 1 > n) { cout << "No"; return 0; }
    if (p + 1 <= n) {
        for (i = 0; i < n; i++) {
            if (p + i + 1 <= n) {
                if ((a[i] == '.') && (a[i + p] == '.')) { a[i] = '0'; a[i + p] = '1'; }
                if ((a[i] == '1') && (a[i + p] == '.')) { a[i + p] = '0'; }
                if ((a[i] == '0') && (a[i + p] == '.')) { a[i + p] = '1'; }
                if ((a[i] == '.') && (a[i + p] == '0')) { a[i] = '1'; }
                if ((a[i] == '.') && (a[i + p] == '1')) { a[i] = '0'; }
                if ((a[i] != a[i + p]) && (a[i] != '.') && (a[i + p] != '.')) { l = 1; }
            }
            else { if (a[i] == '.') { a[i] = '0'; } }
        }
    }
    if (l == 1) { cout << a; }
    else { cout << "No"; };

    return 0;
}