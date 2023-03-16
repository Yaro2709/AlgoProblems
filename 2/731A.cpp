#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    char temp = 'a';
    int cnt = 0;
    int n = str.size();
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = min(abs(temp - str[i]), 26 - abs(str[i] - temp));
        temp = str[i];
        cnt += x;
    }
    cout << cnt << endl;

    return 0;
}