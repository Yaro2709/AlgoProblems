#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}