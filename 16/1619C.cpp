#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, s, d = 0, flag = 0, c, f = 1;
        cin >> a >> s;
        while (s)
        {
            if (a > s)
            {
                flag = 1;
                break;
            }
            c = (s % 10) - (a % 10);

            if (c >= 0)
            {
                c = s % 10 - a % 10;
                s = s / 10;
                a = a / 10;
                d = d + f * c;
                f = f * 10;

            }
            else
            {
                c = s % 100 - a % 10;
                if (c > 9) { flag = 1; break; }
                if (c < 0) {
                    flag = 1;
                    break;
                }
                s = s / 100;
                a = a / 10;
                d = d + f * c;
                f = f * 10;
            }
        }
        if (flag == 0)
            cout << d << "\n";
        else
            cout << "-1\n";

    }
    return 0;
}