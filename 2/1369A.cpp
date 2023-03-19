#include <iostream>

using namespace std;

int main() 
{
    int n; 
    cin >> n;

    while (n--) {
        int v;
        cin >> v;

        if (v % 4 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}