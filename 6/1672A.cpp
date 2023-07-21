#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int s = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            s += x - 1;
        }

        if (s % 2 == 0) cout << "maomao90" << endl;
        else            cout << "errorgorn" << endl;
    }

    return 0;
}