#include <iostream>

using namespace std;

int main()
{
    long long int a, b, x[100005], i = 0;
    cin >> a >> b;
    while (b > a)
    {
        x[i] = b;
        i++;
        if (b % 10 == 1)
            b /= 10;
        else
        {
            if (b % 2 == 0)
                b /= 2;
            else break;
        }
    }
    if (b == a)
    {
        cout << "YES\n" << i + 1 << "\n" << a << " ";
        for (int j = i - 1; j >= 0; j--)
            cout << x[j] << " ";
    }
    else cout << "NO";

    return 0;
}