#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *a = new int[n + 1]; 
        int ans = 0;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] < i)
            {
                ans += lower_bound(v.begin(), v.end(), a[i]) - v.begin();
                v.push_back(i);
            }
        }
        cout << ans << endl;

        delete[] a;
    }
    return 0;
}