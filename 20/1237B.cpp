#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n]; 
    int *b = new int[n]; 
    int *c = new int[n];
    map<int, int> index;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        index[a[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[index[b[i]]] = i;
    }
    int ans = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] < m)
            ans++;
        m = max(m, c[i]);
    }
    cout << ans;

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}