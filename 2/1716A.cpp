#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long int n;
        cin >> n;

        if (n == 1) {
            cout << 2;
        }
        else if (n % 3 == 0) {
            cout << (n / 3);
        }
        else {
            cout << (n / 3 + (1));
        }
        cout << endl;
    }

    return 0;
}