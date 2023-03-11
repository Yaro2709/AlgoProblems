#include <iostream>

using namespace std;

int main() 
{
    int test;

    cin >> test;

    while (test--) 
    {
        int tong = 0;
        int tong1 = 0;
        int n;

        cin >> n;

        if (n % 4 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
                tong += i;
            }
            for (int i = 1; i <= n - 3; i += 2) {
                cout << i << " ";
                tong1 += i;
            }
            cout << tong - tong1 << endl;
        }
    }

    return 0;
}