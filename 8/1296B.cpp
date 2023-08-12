#include <iostream>

using namespace std;

int main()
{
    int t, n, s, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = 0;
        while (n >= 10)
        {
            c = n % 10;
            s += (n / 10) * 10;
            n = (n / 10) + c;
        }
        s += n;
        cout << s << endl;
    }

    return 0;
}