#include<iostream>

using namespace std;

int main()
{
    int a1[200], a2[200], a3[200], n, j = 1, i, k, f1 = 1, f2 = 1, f3 = 1;
    cin >> n;
    for (i = 1; n >= i; i++)
    {
        cin >> k;
        if (k < 0)
        {
            a1[f1] = k; f1++;
        }
        else
            if (k > 0)
            {
                a2[f2] = k; f2++;
            }
            else
                if (k == 0)
                {
                    a3[f3] = k; f3++;
                }
    }
    if (f1 % 2 != 0) { a3[f3] = a1[f1 - 1]; f1--; f3++; }
    if (f2 - 1 == 0) { f1 -= 2; f2 += 2; a2[1] = a1[f1]; a2[2] = a1[f1 + 1]; }
    cout << f1 - 1 << " "; for (i = 1; f1 > i; i++)cout << a1[i] << " "; cout << endl;
    cout << f2 - 1 << " "; for (i = 1; f2 > i; i++)cout << a2[i] << " "; cout << endl;
    cout << f3 - 1 << " "; for (i = 1; f3 > i; i++)cout << a3[i] << " "; cout << endl;

    return 0;
}