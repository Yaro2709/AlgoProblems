#include <iostream>
 
using namespace std;
 
int main()
{
    int ttt;
    cin >> ttt;
 
    while (ttt--)
    {
        int k;
        cin >> k;
 
        int res = 0;
        for (int i = 1; i <= k + res; i++) {
            if (i % 10 == 3 || i % 3 == 0) {
                res++;
            }
        }
 
        cout << k + res << endl;
    }
    
    return 0;
}