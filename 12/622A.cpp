#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int i = 1;
    while (n - i > 0) {
        n = n - i;
        i++;
    }
    cout << n;

    return 0;
}