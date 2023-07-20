#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (y1 == y2 && y1 > y3)
        {
            cout << abs(x1 - x2);
        }
        else if (y1 == y3 && y1 > y2)
        {
            cout << abs(x1 - x3);
        }
        else if (y2 == y3 && y2 > y1)
        {
            cout << abs(x2 - x3);
        }
        else
        {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}