#include <iostream>

using namespace std;

int main() {

    long long int a;

    cin >> a;

    long long int i = 0;
    while (a > 0) {
        if (a % 10 == 4 || a % 10 == 7) {
            i++;
        }
        a /= 10;
    }

    cout << ((i == 7 || i == 4) ? "YES" : "NO");
}