#include<iostream>

using namespace std;

int a[100007];

int main()
{
    int n;
    cin >> n;

    int i, x;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for (i = 100000; i > 0; i--)
    {
        if (a[i] % 2)
        {
            cout << "Conan";
            return 0;
        }
    }

    cout << "Agasa";

    return 0;
}