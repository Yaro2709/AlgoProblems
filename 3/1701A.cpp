#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[5];
        for (int i = 1; i <= 4; i++)
        {
            cin >> a[i];
        }

        if (a[1] + a[2] + a[3] + a[4] == 0) {
            cout << 0 << endl;
        }
        else if (a[1] + a[2] + a[3] + a[4] == 4) {
            cout << 2 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }

    return 0;
}