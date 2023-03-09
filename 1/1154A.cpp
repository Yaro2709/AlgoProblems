#include <iostream>

using namespace std;

int main()
{
    int a[4]; 
    int max = 0;

    for (int i = 0; i < 4; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 4; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        if (a[i] != max)
        {
            cout << max - a[i] << endl;
        }
    }

    return 0;
}