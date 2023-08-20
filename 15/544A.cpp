#include<iostream>

using namespace std;

bool used[26];

int main()
{
    int k;
    string s;
    cin >> k >> s;
    int cnt, spaceCnt;
    for (int i = 0; i < s.size(); i++)
    {
        if (!used[s[i] - 'a']) {
            used[s[i] - 'a'] = true;
            cnt++;
        }
    }
    fill(used, used + 27, 0);

    if (cnt < k) {
        cout << "NO" << endl;
        return 0;
    }
    else cout << "YES" << endl;

    for (int i = 0; i < s.size(); i++)
    {
        if (!used[s[i] - 'a'] && k > 0) {
            used[s[i] - 'a'] = true;
            if (i != 0)s.insert(i, " ");
            k--;

        }
    }
    cout << s;

    return 0;
}