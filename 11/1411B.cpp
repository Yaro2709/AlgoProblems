#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int n1 = n;
        while (n1 > 0) {
            int rem = n1 % 10;
            n1 /= 10;
            if (rem == 0 || n % rem == 0)
                continue;
            n1 = ++n;
        }
        cout << n << endl;
    }
    return 0;
}