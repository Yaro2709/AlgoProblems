#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 2;
        while (n % i != 0 && i <= sqrt(n))
            i++;
        if (i > sqrt(n))
            cout << 1 << " " << n - 1 << endl;
        else
            cout << n / i << " " << n - n / i << endl;
    }

    return 0;
}