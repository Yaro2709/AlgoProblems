#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a = 0, z = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1')        z = 1;
        if (s[i] == '0' && z)   a++;
        if (a >= 6) { 
            cout << "yes"; 
            return 0; 
        }

    }
    cout << "no";

    return 0;
}