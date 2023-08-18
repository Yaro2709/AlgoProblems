#include<iostream>
#include<algorithm>

using namespace std;

long long int a[100057];

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[2] > a[1] + a[0])
            cout << a[1] + a[0] << endl;
        else cout << (a[0] + a[1] + a[2]) / 2 << endl;
    }

    return 0;
}