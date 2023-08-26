#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 0)
        {
            cout << min(a, b) + 1 << endl;
            for (int i = 1; i <= min(a, b) + 1; i++)
            {
                cout << (a + b) / 2 - min(a, b) + 2 * (i - 1) << " ";
            }
            cout << endl;
        }
        else
        {
            cout << (min(a, b) + 1) * 2 << endl;
            for (int i = 1; i <= (min(a, b) + 1) * 2; i++)
            {
                cout << abs(a - b) / 2 + i - 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}