#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n; cin >> n;
    set<long long >s;
    while (n--)
    {
        long long d; cin >> d;
        s.insert(d);
    }
    if (s.size() == 3)
    {

        auto it = s.end();
        it--;
        auto i = s.begin(), i2 = s.begin();
        i2++;
        long long diff = (*it) - (*i2), diff2 = (*i2) - (*i);
        if (diff == diff2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;

    }
    else if (s.size() < 3)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}