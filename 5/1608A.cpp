#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        for (int i = 0; i < x; i++) {
            cout << i + 2 << " ";
        }
        cout << endl;
    }

    return 0;
}