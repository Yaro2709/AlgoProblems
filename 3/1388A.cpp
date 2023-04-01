#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--)
    {
        long long int a;
        cin >> a;
        if (a <= 30) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            if (a == 36 || a == 40 || a == 44) {
                cout << "6 10 15 " << a - 31 << endl;
            }
            else {
                cout << "6 10 14 " << a - 30 << endl;
            }
        }
    }

    return 0;
}