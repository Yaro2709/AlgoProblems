#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int a, b, maxm = 0;
        cin >> a >> b;
        if (b >= a)cout << 1;
        else {
            for (int i = 1; i * i <= a && i <= b; i++) {
                if (a % i == 0) {
                    maxm = max(maxm, i);
                    if (a / i <= b)maxm = max(maxm, a / i);
                }
            }
            cout << a / maxm;

        }
        cout << endl;
    }
    return 0;
}