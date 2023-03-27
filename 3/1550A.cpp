#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << ceil(sqrt(n)) << endl;
    }

    return 0;
}