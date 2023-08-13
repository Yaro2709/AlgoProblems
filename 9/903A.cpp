#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 3 || n == 7 || n == 6 || n == 9 || n == 10 || n > 11)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}