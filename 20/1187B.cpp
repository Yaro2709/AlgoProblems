#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, i, j, q;
    vector<int>a[30];
    string s;
    cin >> n;
    cin >> s;
    for (i = 0; i < s.size(); i++) {
        a[s[i] - 'a'].push_back(i + 1);
    }
    cin >> q;
    for (i = 1; i <= q; i++) {
        string s1;
        int b[30] = { 0 }, m = 0, l;
        cin >> s1;
        for (j = 0; j < s1.size(); j++) {
            b[s1[j] - 'a']++;
        }
        for (j = 0; j < 26; j++) {
            if (b[j] > 0) {
                l = a[j][b[j] - 1];
                m = max(m, l);
            }
        }
        cout << m << endl;
    }
    return 0;
}