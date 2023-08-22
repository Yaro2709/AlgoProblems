#include<iostream>

using namespace std;

int main()
{
    long long int flag = 0, i;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
        if (s[i] != 'a' && flag != 2)
        {
            s[i] = s[i] - 1;
            flag = 1;
        }
        else  if (flag == 1 && s[i] == 'a')
            flag = 2;
    if (flag == 0)
        s[s.size() - 1] = 'z';
    cout << s;
    return 0;
}