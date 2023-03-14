#include<iostream>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a1;
        int a2;

        int n;
        cin >> n;

        a1 = a2 = n / 3;

        if (n % 3 == 1) {
            a1++;
        }
        if (n % 3 == 2){
            a2++;
        }

        cout << a1 << " " << a2 << endl;
    }

    return 0;
}