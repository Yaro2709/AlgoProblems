#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k = 0;
        cin >> x;

        for (int i = 1; i < 100; i++)
        {
            k = 0;
            for (int j = 0; j <= i; j++)
            {
                k = k + pow(2, j);

            }
            if (x % k == 0)
                break;
        }

        cout << x / k << endl;
    }

    return 0;
}