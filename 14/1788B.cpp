#include<iostream>

using namespace std;

int solve(int n)
{
    int num = n;
    int ct = 0;
    while (num > 0)
    {
        int dig = num % 10;
        num = (num - dig) / 10;
        ct += dig;
    }
    return ct;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = 0, r = n;
        while (r >= l)
        {
            int mid = r + (l - r) / 2;
            if (abs(solve(mid) - solve(n - mid)) <= 1)
            {
                cout << mid << " " << n - mid << endl;
                break;
            }
            else if (solve(n - mid) > solve(mid))
            {
                l = mid + 1;

            }
            else r = mid - 1;
        }
    }
    return 0;
}