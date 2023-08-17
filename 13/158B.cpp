#include<iostream>

using namespace std;

int s[6];

int main()
{
    long long int w;
    cin >> w;
    int a;
    for (int i = 1; i <= w; i++)
    {
        cin >> a; s[a]++;
    }
    s[1] -= min(s[1], s[3]);
    cout << s[4] + s[3] + (s[1] + s[2] * 2 + 3) / 4 << endl;

    return 0;
}