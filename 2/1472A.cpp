#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        int b;
        cin >> b;

        int friends;
        cin >> friends;

        int list = 1;
        while (a % 2 == 0) {
            list *= 2;
            a /= 2;
        }

        while (b % 2 == 0) {
            list *= 2;
            b /= 2;
        }

        if (list >= friends) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
        
    return 0;
}