#include <iostream>

using namespace std;

int main()
{
    string s, t, a, b;
    int n, m, i;
    cin >> s >> t;
    cin >> n;
    cout << s << " " << t << endl;
    while (n--)
    {
        cin >> a >> b;
        if (s == a) {
            s = b;
        }
        else if (t == a) {
            t = b;
        }
        cout << s << " " << t << endl;

    }

    return 0;
}