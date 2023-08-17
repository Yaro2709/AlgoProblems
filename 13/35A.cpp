#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        if (s == a) s = b;
        else if (s == b) s = a;
    }
    cout << s;

    return 0;
}