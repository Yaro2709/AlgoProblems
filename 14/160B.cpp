#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, c = 0, b = 0; string x, y = "";   cin >> n >> x;

    for (int i = n; i < 2 * n; i++)
        y += x[i];

    x.erase(x.begin() + n, x.end());   
    sort(x.begin(), x.end());    
    sort(y.begin(), y.end());

    for (int i = 0; i < n; i++)
        if (x[i] < y[i])
            c++;
        else if (y[i] < x[i])
            b++;

    if (b == n || c == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}