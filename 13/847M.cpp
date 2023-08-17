#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m[100];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    int sh = m[1] - m[0];
    bool b = true;
    for (int i = 1; i < n; i++)
    {
        if (m[i] != m[0] + sh * i) b = false;
    }
    if (b)
    {
        cout << m[0] + sh * n;
    }
    else
    {
        cout << m[n - 1];
    }
    
    return 0;
}