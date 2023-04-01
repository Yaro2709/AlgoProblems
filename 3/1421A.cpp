#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k = a ^ b;
        cout << k << endl;
    }

    return 0;
}