#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int pplCnt = 0;
    int ans = 0;
    while (getline(cin, s)) {
        if (s[0] == '+') {
            ++pplCnt;
        }
        else if (s[0] == '-') {
            --pplCnt;
        }
        else {
            int len = (int)s.size() - s.find(':') - 1;
            ans += len * pplCnt;
        }
    }
    cout << ans << '\n';

    return 0;
}