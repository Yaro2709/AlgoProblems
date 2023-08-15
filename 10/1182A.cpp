#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n % 2) cout << "0" << endl;
    else cout << (int)pow(2, n / 2) << endl;

    return 0;
}