#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> edges(n);
    vector<int> color(n);
    int ile = 1;
    for (int i = 1; i < n; i++)
        cin >> edges[i];

    cin >> color[0];
    for (int i = 1; i < color.size(); i++)
    {
        cin >> color[i];
        if (color[i] != color[edges[i] - 1])
            ile++;
    }
    cout << ile << "\n";

    return 0;
}