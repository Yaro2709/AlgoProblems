#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int cmx = 0;
    int mx = 0;
    int pre = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        if (v > pre)
        {
            cmx++;
        }
        else
        {
            mx = max(mx, cmx);
            cmx = 1;
        }
        pre = v;
    }

    cout << max(cmx, mx) << endl;

    return 0;
}