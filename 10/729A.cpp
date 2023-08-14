#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o' && s[i + 1] == 'g' && s[i + 2] == 'o') {
            s[i] = '*', s[i + 1] = '*', s[i + 2] = '*';
            for (int j = i + 3; j < n; j++) {
                if (s[j] == 'g' && s[j + 1] == 'o')
                {
                    s[j] = '0';
                    s[j + 1] = '0';
                    j++;
                }
                else {
                    break;
                }
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0') {
            cout << s[i];
        }
    }

    return 0;
}