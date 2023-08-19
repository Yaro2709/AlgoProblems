#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int i = k - 1;
    for (i; i > 0; i--)
        if (n % i == 0)
            break;
    cout << (n / i) * k + i;

    return 0;
}