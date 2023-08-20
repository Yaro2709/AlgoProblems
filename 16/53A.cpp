#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, i, count = 0, j;
    string a[200], b;
    cin >> b;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (j = 0; j < n; j++) {
        count = 0;
        for (i = 0; i < b.size(); i++)
        {
            if (b[i] == a[j][i])
                count++;
        }
        if (count == b.size()) {
            cout << a[j];
            break;
        }
    }
    if (j == n)
        cout << b;

    return 0;
}