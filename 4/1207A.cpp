#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, p, f, h, c, res;
        cin >> b >> p >> f;
        cin >> h >> c;

        res = 0;
        for (int i = 0; i <= p; i++)
            for (int j = 0; j <= f; j++)
                if (2 * (i + j) <= b)
                    res = max(res, i * h + c * j);

        cout << res << endl;
    }

    return 0;
}