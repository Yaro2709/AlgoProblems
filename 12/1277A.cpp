#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int n, sum;
    int c;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        c = 0;
        for (int i = 1; i <= 9; i++)
        {
            sum = 0;
            for (int j = 1; j <= 9; j++)
            {
                sum = sum * 10 + i;
                if (sum > n)
                    break;
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}