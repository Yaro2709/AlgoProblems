#include <iostream>

using namespace std;

int main() {
    string s;
    s = "abba";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cout << s[i % 4];
    cout << endl;

    return 0;
}