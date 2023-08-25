#include<iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    cout << min((a + b) / 3, min(a, b)) << endl;

    return 0;
}