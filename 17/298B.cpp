#include<iostream>

using namespace std;

int main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string str;
    cin >> str;
    for (int i = 0; i < t; i++)
    {
        if (str[i] == 'N' && sy < ey)
            sy++;
        else if (str[i] == 'S' && ey < sy)
            sy--;
        else if (str[i] == 'W' && ex < sx)
            sx--;
        else if (str[i] == 'E' && ex > sx)
            sx++;
        if (sx == ex && sy == ey) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}