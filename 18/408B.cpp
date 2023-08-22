#include<iostream>
#include<string>

using namespace std;

int a[26], b[26];

int main()
{
    int sum = 0;
    string s, q;
    cin >> s >> q;
    for (int i = 0; i < s.size(); i++)
        a[s[i] - 'a']++;
    for (int i = 0; i < q.size(); i++)
        b[q[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (a[i] == 0 && b[i] > 0) {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] > b[i])
            a[i] = b[i];
        sum += a[i];
    }
    cout << sum;

    return 0;
}