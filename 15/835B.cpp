#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    long long int sum = 0;
    for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (sum >= k) break;
        sum += '9' - s[i];
        count++;
    }
    cout << count << "\n";

    return 0;
}