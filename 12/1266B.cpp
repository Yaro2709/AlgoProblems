#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        long long int x;
        cin >> x;
        if ((x >= 14) && (x % 14 >= 1) && (x % 14 <= 6)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}