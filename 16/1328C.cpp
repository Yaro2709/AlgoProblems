#include<iostream>

using namespace std;

char x[50005];
char a[50005];
char b[50005];

int main()
{
    int t, n, first;
    cin >> t;
    a[0] = '1';
    b[0] = '1';
    while (t--) {
        first = 1;
        cin >> n;
        cin >> x;
        for (int i = 1; i < n; i++) {
            if (x[i] == '2' && first) { a[i] = '1'; b[i] = '1'; }
            else if (x[i] == '2' && !first) { a[i] = '0'; b[i] = '2'; }
            else if (x[i] == '1' && first) { a[i] = '1'; b[i] = '0'; first = 0; }
            else if (x[i] == '1' && !first) { a[i] = '0'; b[i] = '1'; }
            else { a[i] = '0'; b[i] = '0'; }
        }
        for (int i = 0; i < n; i++) cout << a[i];
        cout << endl;
        for (int i = 0; i < n; i++) cout << b[i];
        cout << endl;
    }
    return 0;
}