#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

const double pi = acos(-1);

int main() {
    double n, r;
    cin >> n >> r;
    double st = sin(pi / n);
    cout << fixed << setprecision(15) << (-r * st) / (st - 1);
    return 0;
}