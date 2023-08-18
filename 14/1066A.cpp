#include<iostream>

using namespace std;

int main()
{
    int t, s, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> s;
        c--;
        cout << (a / b) - ((s / b) - (c / b)) << endl;
    }

    return 0;
}