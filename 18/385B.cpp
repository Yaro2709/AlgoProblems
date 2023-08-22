#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s, can;
    cin >> s;
    long long ans, k = 0;
    if (s.size() >= 4)
        for (int i = 0; i < s.size() - 3; i++)
        {
            can = "";
            for (int j = i; j < i + 4; j++)
                can += s[j];

            if (can == "bear")
            {
                ans += (i - k + 1) * (s.size() - i - 3);
                k = i + 1;
            }
        }

    cout << ans << endl;

    return 0;
}