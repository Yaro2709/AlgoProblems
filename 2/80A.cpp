#include<iostream>

using namespace std;

bool isprime(int n) 
{
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() 
{
    int n, m, x;
    cin >> n >> m;

    x = n + 1;
    while (isprime(x) == false) {
        x++;
    }

    cout << (x == m ? "YES" : "NO");

    return 0;
}