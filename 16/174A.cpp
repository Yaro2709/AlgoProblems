#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
    double n, b, sum = 0, k;
    cin >> n >> b;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    k = (sum + b) / n;
    for (int i = 0; i < n; i++)
    {
        if (k < v[i])
        {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(6) << k - v[i] << endl;
    }
    return 0;
}