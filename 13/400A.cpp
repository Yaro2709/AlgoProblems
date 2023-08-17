#include <iostream>

using namespace std;

int aa[10];

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int ans = 0;
        int a, b;
        for (int i = 1; i <= 12; i++)
            if (12 % i == 0)
            {
                a = i;
                b = 12 / i;
                int flag = 0;
                for (int j = 0; j < b; j++)
                {
                    int f = 1;
                    for (int k = 0; k < a; k++)
                        if (s[k * b + j] == 'O') { f = 0; break; }
                    if (f) { flag = 1; break; }
                }
                if (flag == 1)
                    ans++, aa[ans] = a;
            }
        cout << ans;
        for (int i = 1; i <= ans; i++)
        {
            cout << " " << aa[i] << 'x' << 12 / aa[i];
        }
        cout << endl;
    }
    return 0;
}