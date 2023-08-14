#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    int a = n % 4;
    int aa[4] = { 6,8,4,2 };
    cout << aa[a];

    return 0;
}