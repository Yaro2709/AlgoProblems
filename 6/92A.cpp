#include <iostream>

using namespace std;

int main()
{
    int n, k, a = 1;
    cin >> n >> k;
    k %= (n) * (n + 1) / 2;
    while (k >= a) {
        k -= a;
        a++;
    }
    cout << k << endl;

    return 0;
}