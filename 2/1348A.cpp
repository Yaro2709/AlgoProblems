#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
    long long int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;

        cout << 2 * (pow(2, n / 2) - 1) << endl;
    }

    return 0;
}