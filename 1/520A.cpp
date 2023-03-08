#include <iostream>
#include <set>

using namespace std;

int main() {

    int n;
    string s;

    cin >> n;
    
    cin >> s;
    
    set <char> se;

    for (int i = 0; i < n; i++) {
        se.insert(tolower(s[i]));
    }

    if (se.size() == 26) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}