#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int  n;
        cin >> n;
        string s = "";
        int t = ceil(n / 4.0);
        for (int i = 0; i < n - t; i++)
        {
            s += '9';
        }

        for (int i = 0; i < t; i++)
            s += '8';
        cout << s << endl;
    }

    return 0;
}