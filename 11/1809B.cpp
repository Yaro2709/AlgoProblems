#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        cout << (int)ceil(sqrtl(n)) - 1 << endl;
    }
    return 0;
}