#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "ROYGBIV";

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cout << s[k++];
        if (k == 7)
        {
            k = k - 4;
        }
    }
    return 0;
}