#include <iostream>

using namespace std;

int a[1010], b[1010];
int cnt1, cnt2;

int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])        cnt1++;
        else if (b[i] > a[i])   cnt2++;
    }
    if (!cnt1) {
        cout << "-1" << endl;
    }
    else {
        cout << cnt2 / cnt1 + 1 << endl;
    }

    return 0;
}