#include<iostream>

using namespace std;

int a[4010] = { 0 };

int main()
{
    int x, k, i, num, num1, num2;
    cin >> x >> k;
    while (k--)
    {
        cin >> num;
        if (num == 1)
        {
            cin >> num2 >> num1;
            a[num1] = 1;
            a[num2] = 1;
        }
        else
        {
            cin >> num2;
            a[num2] = 1;
        }
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i < x; i++)
    {
        if (a[i] == 0)
        {
            ans1++;
            ans2++;
            if (a[i + 1] == 0 && i + 1 < x)
            {
                i++;
                ans2++;
            }
        }
    }
    cout << ans1 << ' ' << ans2 << endl;

    return 0;
}