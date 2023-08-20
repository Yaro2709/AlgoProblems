#include<iostream>
#include<algorithm>

using namespace std;

const int z = 1000;

int main()
{
    int n, a[z];
    cin >> n;
    for (int i = 0; i < n * 2; i++) cin >> a[i];
    sort(a, a + n * 2);
    if (a[n] > a[n - 1]) cout << "YES";
    else cout << "NO";

    return 0;
}