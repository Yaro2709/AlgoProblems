#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, ctr = 1;
        cin >> a;
        for (int i = 0; i <= 29; i++)
        {
            if ((a & (1 << i)) != 0)
                ctr *= 2;
        }
        cout << ctr << endl;
    }
    return 0;
}