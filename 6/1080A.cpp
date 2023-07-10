#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n, k;
    cin >> n >> k;
    long a = ceil((n * 2) / k);
    long b = ceil((n * 5) / k);
    long c = ceil((n * 8) / k);
    cout << a + b + c << endl;
    return 0;
}