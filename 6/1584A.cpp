#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int u, v;
        cin >> u >> v;
        cout << -u * u << " " << v * v << endl;
    }

    return 0;
}