#include<iostream>

using namespace std;

bool ss(char c) {

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        return true;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
        if (ss(s[i]) && ss(s[i + 1])) {
            s.erase(i + 1, 1);
            i--;
        }
    cout << s;

    return 0;
}