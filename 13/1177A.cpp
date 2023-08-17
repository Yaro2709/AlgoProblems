#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "", a;
    for (int i = 1; i <= 10000; i++)
    {
        a = to_string(i);
        s += a;
    }
    cout << s[n - 1];

    return 0;
}