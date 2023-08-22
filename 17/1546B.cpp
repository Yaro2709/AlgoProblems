#include<iostream>
#include<vector>

using namespace std;

void algo()
{
    int n, m;
    cin >> n >> m;
    vector<int> mas(m);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            mas[j] += int(s[j]);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            mas[j] -= int(s[j]);
    }
    for (int i = 0; i < m; i++)
        cout << char(mas[i]);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        algo();
    }

    return 0;
}