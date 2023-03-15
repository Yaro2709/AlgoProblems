#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int w1 = 0;
        int w2 = 0;

        w1 = max(a, b);
        w2 = max(c, d);

       
        if (w1 > min(c, d) && w2 > min(a, b)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}