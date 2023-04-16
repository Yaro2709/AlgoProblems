#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        cout << -(a - 1) << " " << a << endl;
    }

    return 0;
}