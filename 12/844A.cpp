#include <iostream>

using namespace std;

int main()
{
    string s;
    int i, k;
    cin >> s >> k;

    if (s.length() < k)
        cout << "impossible";
    else
    {
        bool a[26] = { false };
        for (i = 0; i < s.length(); i++)
            a[s[i] - 'a'] = true;
        int sum = 0;
        for (i = 0; i < 26; i++)
            sum += a[i];
        cout << max(0, k - sum);
    }

    return 0;
}