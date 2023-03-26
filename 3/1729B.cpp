#include<iostream>

using namespace std;

string solve() {
    int n;
    cin >> n;
    string code;
    cin >> code;

    string ans = "";
    int i = code.size() - 1;
    while (i >= 0) {
        if (code[i] == '0') {
            char ch = 10 * (code[i - 2] - '0') + code[i - 1] - '0' + 'a' - 1;
            ans = ch + ans;
            i -= 3;
        }
        else {
            char ch = code[i] - '0' + 'a' - 1;
            ans = ch + ans;
            --i;
        }
    }
    return ans;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}