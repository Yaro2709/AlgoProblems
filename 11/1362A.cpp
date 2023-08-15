#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, count = 0;
        cin >> a >> b;
        if (a == b) cout << 0 << endl;
        else
        {
            if ((a % b != 0) && (b % a != 0)) cout << -1 << endl;
            else
            {
                c = max(a / b, b / a);

                while (!(c % 2))
                {
                    c = c / 2;
                    count++;
                }
                if (c == 1) cout << count / 3 + (count % 3) / 2 + (count % 3) % 2 << endl;
                else cout << -1 << endl;
            }
        }
    }

    return 0;
}