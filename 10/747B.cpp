#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0, b = 0, c = 0, d = 0;
    char s[1111];
    int flag = 1;
    cin >> n;
    cin >> s;
    if (n % 4 != 0)
    {
        flag = 0;
    }
    else
    {
        n = n / 4;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == 'A')a++;
            else if (s[i] == 'G')b++;
            else if (s[i] == 'C')c++;
            else if (s[i] == 'T')d++;
        }
        a = n - a;
        b = n - b;
        c = n - c;
        d = n - d;
        for (int i = 0; s[i]; i++) {
            if (s[i] == '?')
            {
                if (a > 0)
                {
                    s[i] = 'A';
                    a--;
                }
                else if (b > 0)
                {
                    s[i] = 'G';
                    b--;
                }
                else if (c > 0)
                {
                    s[i] = 'C';
                    c--;
                }
                else if (d > 0)
                {
                    s[i] = 'T';
                    d--;
                }
            }

        }
        if (a != 0 || b != 0 || c != 0 || d != 0) {
            flag = 0;
        }
    }

    if (flag) {
        cout << s << endl;
    }
    else {
        cout << "===" << endl;
    }

    return 0;
}