#include<iostream>

using namespace std;

int main()
{
    int n, s = 1;
    int long long k;
    cin >> n >> k;
    while (k % 2 == 0)
    {
        k /= 2;
        s++;
    }
    cout << s;

    return 0;
}