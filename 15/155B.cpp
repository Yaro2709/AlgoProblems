#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> a1;
    vector<int> a2;
    int n, a, b, b1 = 1;
    long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;

        if (b == 0)a1.push_back(a);
        else
        {
            b1 += b - 1;
            sum += a;
        }

    }
    sort(a1.begin(), a1.end());
    for (int i = a1.size() - 1; i >= 0 && b1 > 0; i--, b1--)
    {
        sum += a1[i];
    }
    cout << sum << endl;

    return 0;
}