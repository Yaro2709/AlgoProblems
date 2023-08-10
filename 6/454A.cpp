#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(i - n / 2) + abs(j - n / 2) <= n / 2)
                cout << "D";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}