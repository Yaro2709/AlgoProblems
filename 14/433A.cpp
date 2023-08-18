#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int w[2] = { 0 };
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp; w[temp / 100 - 1]++;
    }
    if (w[1] % 2 == 0) w[1] = 0;
    else w[1] = 2;
    w[0] -= w[1];
    if (w[0] >= 0 && w[0] % 2 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}