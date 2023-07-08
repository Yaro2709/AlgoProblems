#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *d = new int[n+1];
    for (int i = 1; i < n; i++) {
        cin >> d[i];
    }

    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i < b; i++) {
        ans = ans + d[i];
    }
    cout << ans;

    delete[] d;

    return 0;
}