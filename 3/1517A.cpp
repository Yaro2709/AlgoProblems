#include <iostream>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        if (n % 2050 == 0) 
        {
            long long int x = n / 2050;
            long long int sum = 0;
            while (x != 0) 
            {
                sum += x % 10;
                x /= 10;
            }
            cout << sum << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }

    return 0;
}