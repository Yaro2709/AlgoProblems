#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int lvl = 0;
    int i = 0;
    int x = 0;
    while (1)
    {
        ++i;
        x += i;
        n -= x;

        if (n < 0) {
            break;
        }

        ++lvl;
    }

    cout << lvl << endl;
}