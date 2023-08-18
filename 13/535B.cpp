#include<iostream>

using namespace std;

int main()
{
    int n, m = 1, k = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 10 == 4)
        {
            k += m;
        }
        else
        {
            k += 2 * m;
        }
        m *= 2;

        n /= 10;
    }
    cout << k;

    return 0;
}