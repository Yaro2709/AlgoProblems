#include <iostream>

using namespace std;

int main()
{
    long long int t, n, a, d, j;
    char ch = 'a';
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> d;
        j = 0;
        ch = 'a';
        for (int i = 0; i < n; i++)
        {
            cout << ch;
            j++;
            if (j < d) { ch++; }
            if (j == a) { ch = 'a'; j = 0; }



        }
        cout << endl;
    }

    return 0;
}