#include <iostream>

using namespace std;

int main() 
{
    int t, n; 
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cout << n << " ";
        cout << endl;
    }

    return 0;
}