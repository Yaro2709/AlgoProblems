#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> pos(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            pos[v[i] - 1] = i;
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
            {
                reverse(v.begin() + i, v.begin() + pos[i] + 1);
                break;
            }
        }

        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}