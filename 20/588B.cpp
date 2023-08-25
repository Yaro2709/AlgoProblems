#include<iostream>

using namespace std;

int main() {
    long long int n, i = 1e6;
    cin >> n;
    for (; i > 1;) {
        if (n % (i * i))
            i--;
        else
            n /= i;
    }
    cout << n;

    return 0;
}