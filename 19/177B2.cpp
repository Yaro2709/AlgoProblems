#include<iostream>

using namespace std;

int solve(int n)
{
    for (int i = n / 2; i > 1; --i)
    {
        if (n % i == 0)
        {
            return solve(i) + i;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n) + n;

    return 0;
}