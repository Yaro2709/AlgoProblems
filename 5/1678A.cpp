#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        set<int>st;
        int z = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (!a[i]) z++;
            st.insert(a[i]);
        }

        if (z)
        {
            cout << n - z << endl;
        }
        else if (st.size() != n)
        {
            cout << n << endl;
        }
        else
        {
            cout << n + 1 << endl;
        }
    }

    return 0;
}