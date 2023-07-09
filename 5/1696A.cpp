#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    for (int w = 1; w <= t; w++)
    {
        long long int n, z;
        cin >> n >> z; 
        long long int max = 0;
        long long int nr;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            nr = a | z;
            if (nr > max) {
                max = nr;
            }
        }
        cout << max << endl;
    }

    return 0;
}