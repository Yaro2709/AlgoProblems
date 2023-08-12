#include <iostream>

using namespace std;

int main() 
{
    long long int a, b, m, ans;
    cin >> a >> b;

    if (a % 2 == 1)
    {
        m = a / 2;
        m++;
    }
    else {
        m = a / 2;
    }

    if (b > m) {
        ans = abs(m - b) * 2;
    }
    else {
        ans = b * 2 - 1;
    }

    cout << ans << endl;

    return 0;
}