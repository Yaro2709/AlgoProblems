#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n, s; cin >> n >> s;

        cout << s / (n * n) << endl;

    }

    return 0;
}