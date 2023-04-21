#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;

        string s;
        cin >> s;

        int* t = new int[a];
        t[0] = 1;
        cout << t[0];
        int ls;
        for (int i = 1; i < a; i++)
        {
            ls = 1 + s[i] - '0';
            if (ls == t[i - 1] + s[i - 1] - '0') {
                t[i] = 0;
            }
            else {
                t[i] = 1;
            }
            cout << t[i];
        }
        cout << endl;

        delete[] t;
    }

    return 0;
}