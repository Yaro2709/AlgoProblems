#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double h, l;
    cin >> h >> l;
    cout << setprecision(14) << (l * l - h * h) / (2 * h) << endl;

    return 0;
}