#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    string n;
    while (t--) {
        cin >> n;

        cout << (n[0] - '1') * 10 + (n.size() * (n.size() + 1)) / 2 << endl;
    }

    return 0;
}