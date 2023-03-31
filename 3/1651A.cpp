#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;

        long long int c = (pow(2, n) - 1);
        cout << c << endl;
    }

    return 0;
}