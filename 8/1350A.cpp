#include <iostream>
#include<math.h>

using namespace std;

int nt(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return i;
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        b--;
        a += nt(a) + (2 * b);
        cout << a << endl;
    }

    return 0;
}