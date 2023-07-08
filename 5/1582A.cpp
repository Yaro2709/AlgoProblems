#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, s;
        cin >> a >> b >> c;
        s = a + 2 * b + 3 * c;
        if (s % 2 == 0) {
            cout << "0" << endl;
        }
        else {
            cout << "1" << endl;
        }
    }

    return 0;
}