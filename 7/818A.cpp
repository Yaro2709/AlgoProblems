#include <iostream>

using namespace std;

int main()
{
    long long c, b, a;
    cin >> c >> b; a = c / 2;
    cout << a / (b + 1) << " " << b * (a / (b + 1)) << " " << c - b * (a / (b + 1)) - a / (b + 1) << endl;
    return 0;
}