#include<iostream>
#include<string.h>

using namespace std;

#define maxn 200010
int nb[maxn];

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int sol = 0;
    for (int i = 0; i < n; ++i)
    {
        memset(nb, 0, sizeof(nb));
        for (int j = i; j < n; ++j)
        {
            ++nb[s[j]];
            if (nb['U'] == nb['D'] && nb['L'] == nb['R'])
                ++sol;
        }
    }
    cout << sol << "\n";

    return 0;
}