#include <iostream>

using namespace std;

int n, ans = 0;
string s, p;

int main()
{
    cin >> n >> s;
    int res1, res2;
    res1 = res2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x') {
            if (res1 >= n / 2) {
                res2++;
                p += 'X';
                ans++;
            }
            else {
                res1++;
                p += 'x';
            }
        }
        else {
            if (res2 >= n / 2)
            {
                ans++;
                res1++;
                p += 'x';
            }
            else {
                res2++;
                p += 'X';
            }
        }
    }
    cout << ans << endl;
    cout << p;

    return 0;
}