#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s;
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}