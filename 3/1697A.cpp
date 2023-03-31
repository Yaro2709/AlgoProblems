#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = 1; i <= a; i++)
        {
            int te;
            cin >> te;
            b -= te;
        }
        cout << (-b < 0 ? 0 : -b) << endl;
    }

    return 0;
}