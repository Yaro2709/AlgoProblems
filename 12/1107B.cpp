#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        long long int a, b;
        cin >> a >> b;
        cout << abs(9 * (a - 1) + b) << endl;
    }

    return 0;
}