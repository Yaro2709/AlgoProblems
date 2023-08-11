#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n - (n + 1) / 3;
    cout << n << endl;

    return 0;
}