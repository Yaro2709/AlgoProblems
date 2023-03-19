#include <iostream>
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
        int *a = new int[n];

        set <int> S;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            S.insert(a[i]);
        }
        cout << S.size() << endl;

        delete[] a;
    }

    return 0;
}