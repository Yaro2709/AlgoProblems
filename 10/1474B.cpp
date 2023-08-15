#include <iostream>

using namespace std;

bool hong(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int T;
    cin >> T;
    int i, k;
    for (k = 0; k < T; k++)
    {
        int d;
        cin >> d;
        int a1 = 1 + d;
        while (a1)
        {
            if (hong(a1))
                break;
            a1++;
        }
        int a2 = a1 + d;
        while (a2)
        {
            if (hong(a2))
                break;
            a2++;
        }
        cout << a1 * a2 << endl;
    }

    return 0;
}