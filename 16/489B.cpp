#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int *boys = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }
    cin >> m;
    int *girls = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }
    sort(boys, boys + n);
    sort(girls, girls + m);

    int start = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = start; j < m; j++)
        {
            if (abs(girls[j] - boys[i]) <= 1)
            {
                cnt++;
                start = j + 1;
                break;
            }
        }
    }
    cout << cnt << endl;

    delete[] boys;
    delete[] girls;

    return 0;
}