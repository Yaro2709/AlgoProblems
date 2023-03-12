#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    int t;
    int m[4] = { 0 }; 
    int a[4][10000];
 
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        m[t]++;
        a[t][m[t]] = i;
    }
 
    int ts = min(m[1], min(m[2], m[3]));
 
    cout << ts << endl;
 
    for (int i = 1; i <= ts; i++)
    {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i] << endl;
    }
 
    return 0;
}