#include <iostream>
#include <algorithm>

using namespace std;

void F() {
    int t;
    string a;
    cin >> t >> a;
    
    sort(a.begin(), a.end());
    
    cout << a + "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        F();
    }
    return 0;
}