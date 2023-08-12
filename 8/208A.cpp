#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int ind = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            if (ind == 1)
                cout << " ";
            ind = 0;
            i = i + 2;
        }
        else
        {
            ind = 1;
            cout << a[i];
        }
    }

    return 0;
}