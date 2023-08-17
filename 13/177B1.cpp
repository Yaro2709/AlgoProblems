#include<iostream>

using namespace std;

int main()
{
    long long int ans = 0;
    int n;
    cin >> n;
    ans = n;
    while (n != 1)
    {
        bool f = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                f = 1;
                n /= i;
                ans += n;
                break;
            }
        }
        if (!f)n = 1;
    }
    cout << ++ans << endl;

    return 0;
}