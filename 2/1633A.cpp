#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0) {
            cout << n << endl;
            continue;
        }

        n = (n / 10) * 10;
        while (n % 7 != 0)
        {
            n++;
        }

        cout << n << endl;
    }

    return 0;
}