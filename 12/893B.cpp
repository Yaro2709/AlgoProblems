#include <iostream>

using namespace std;

int main()
{
    int a[] = { 1,2,3 };
    int n;
    cin >> n;
    for (int k = 10; k; k--)
    {
        if (n % (((1 << (k)) - 1) << (k - 1)) == 0) {
            cout << (((1 << (k)) - 1) << (k - 1)) << endl;
            break;
        }
    }

    return 0;
}