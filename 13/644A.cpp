#include<iostream>

using namespace std;

int main()
{
    long long int a, b, n;
    cin >> n >> a >> b;
    if (a * b < n)
    {
        cout << -1;
        return 0;
    }
    for (long i = 0; i < a; i++)
    {
        for (long j = 0; j < b; j++)
        {
            if (i % 2 == 0)
            {
                if (i * b + j + 1 <= n)
                    cout << i * b + j + 1 << " ";
                else
                    cout << 0 << " ";
            }
            else
            {
                if (i * b + b - j <= n)
                    cout << i * b + b - j << " ";
                else
                    cout << 0 << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}