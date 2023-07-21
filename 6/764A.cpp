#include <iostream>

using namespace std;

int main()
{
    long long  int n, m, z, count = 0;
    cin >> n >> m >> z;
    for (int i = z; i > 0; i--)
    {
        if ((i % n == 0) && (i % m == 0))
            count++;
    }
    cout << count;

    return 0;
}