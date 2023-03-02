#include <iostream>

using namespace std;

int main()
{
    int limaka;
    int boba;
    int kl = 3;
    int kb = 2;

    cin >> limaka;
    cin >> boba;

    int years = 0;

    while(limaka <= boba) {
        limaka *= kl;
        boba *= kb;
        years += 1;
    }

    cout << years << endl;
}