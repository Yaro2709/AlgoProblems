#include<iostream>
#include<string>
#include<queue>

using namespace std;

int cnt[2];
queue<int> q[2];

int main()
{
    int n;
    string a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        cnt[a[i] - '0']++;
        if (b[i] == '0')
            q[a[i] - '0'].push(i);
    }

    cout << q[0].size() * cnt[1] + q[1].size() * cnt[0] - q[0].size() * q[1].size() << endl;

    return 0;
}