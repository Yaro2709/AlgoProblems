#include <iostream>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) {
        int n, s; 
        cin >> n >> s;
        cout << s / (n / 2 + 1) << endl;
    }

    return 0;
}