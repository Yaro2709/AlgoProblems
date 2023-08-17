#include<iostream>

using namespace std;

int main()
{
    int n, tk, mx = -1;
    cin >> n;
    while (n--)
    {
        cin >> tk;
        if (mx < tk) {
            mx = tk;
        }
    }
    cout << mx << endl;

    return 0;
}