#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int logo = log2(n);
    int round = 0;

    while (true)
    {
        if (a == b)
            break;
        if (a % 2 != 0)a += 1;
        if (b % 2 != 0)b += 1;
        a = a / 2;
        b = b / 2;

        round += 1;
    }
    if (round == logo)
        cout << "Final!" << endl;
    else
        cout << round << endl;
    return 0;
}