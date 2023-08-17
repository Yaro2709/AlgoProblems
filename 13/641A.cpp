#include<iostream>

using namespace std;

#define N 100005

int n;
int a[N];
char c[N];
bool ca[N];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) if (c[i] == '<') a[i] *= -1;
    int vt = 1;
    while (vt) {
        if (ca[vt]) break;
        ca[vt] = 1;
        vt += a[vt];
        if (vt > n || vt < 1) { cout << "FINITE"; return 0; }
    }
    cout << "INFINITE";

    return 0;
}