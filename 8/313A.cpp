#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n > 0)
        cout << n;
    else
    {
        n *= -1;
        if ((n % 10) > ((n / 10) % 10))
            cout << -n / 10;
        else
            cout << -(n / 100 * 10 + n % 10);
    }

    return 0;
}