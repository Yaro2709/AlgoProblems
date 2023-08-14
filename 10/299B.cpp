#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int cnt = 0, res = 0, len = str.length();

    for (int i = 0; i < len; i++) {
        if (str[i] == '#') { cnt++; }
        else {
            if (cnt > res) { res = cnt; cnt = 0; }
            else { cnt = 0; }
        }
    }
    if (res < k) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }

    return 0;
}