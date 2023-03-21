#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long k = 1;
        while (k * 2 <= n)
        {
            k *= 2;
        }
        cout << k - 1 << endl;
    }

    return 0;
}