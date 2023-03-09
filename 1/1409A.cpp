#include <iostream>

using namespace std;

int main()

{
    int n;
    int a;
    int b;
   
    cin >> n;
    while (n--)
    {
        cin >> a;
        cin >> b;

        if (a == b) {
            cout << "0" << endl;
        }
        else
        {
            if (abs(a - b) % 10 == 0) 
            {
                cout << abs(a - b) / 10 << endl;
            }
            else
            {
                cout << (abs(a - b) / 10) + 1 << endl;
            }
        }

    }

    return 0;
}