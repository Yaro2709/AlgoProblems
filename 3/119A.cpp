#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    int t;
    while (b > 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return(a);
}

int main()
{
    int a[2], n, i = 0;
    cin >> a[1] >> a[0] >> n;
    while (++i)
    {
        if (!n) { 
            cout << i % 2; 
            break; 
        }
        n -= gcd(a[i % 2], n);
    }
    return(0);
}