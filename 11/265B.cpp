#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t = n + n - 1;
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        t += abs(a[i] - h);
        h = a[i];

    }
    cout << t;

    return 0;
}