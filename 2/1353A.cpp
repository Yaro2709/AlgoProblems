#include<iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t)
    {
        long long int a, s;
        cin >> a >> s;
        if (a == 1) {
            cout << "0" << endl;
        }
        else if (a == 2) {
            cout << s << endl;
        }
        else {
            cout << 2 * s << endl;
        }

        t--;
    }
}