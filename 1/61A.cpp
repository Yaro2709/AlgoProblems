#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string n1;
    string n2;

    cin >> n1;
    cin >> n2;
    
    for (int i = 0; i < n1.size(); i++) {
        if (n1[i] != n2[i]) {
            n1[i] = '1';
        }
        else {
            n1[i] = '0';
        }
    }

    cout << n1 << endl;

    return 0;
}