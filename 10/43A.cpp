#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, m;
    cin >> s;
    int t1 = 1, t2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        string r;
        cin >> r;
        if (s == r)
            t1++;
        else {
            m = r;
            t2++;
        }
    }
    (t1 > t2) ? cout << s : cout << m;

    return 0;
}