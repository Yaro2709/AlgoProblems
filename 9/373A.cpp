#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a)
    {
        a = a * 2;
        bool flag = true;
        string arr[5];
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i <= 9; i++)
        {
            c = 0;
            for (int k = 0; k < 4; k++)
                for (int j = 0; j < 4; j++)
                    if (arr[k][j] - '0' == i)
                        c++;
            if (c > a)
            {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else      cout << "NO" << endl;
    }

    return 0;
}