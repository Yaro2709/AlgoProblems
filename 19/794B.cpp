#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double n, h;
    cin >> n >> h;
    for (int i = 0; i < n - 1; i++)
    {
        double x = h * (sqrt((i + 1) / n));
        cout << setprecision(12) << x << " ";
    }

    return 0;
}