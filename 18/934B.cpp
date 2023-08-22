#include<iostream>

using namespace std;

int main()
{
    long long int t;
    long long int n, m;
    cin >> t;
    if (t > 36)
        cout << -1;
    else {
        int i = t / 2;
        for (int j = 0; j < i; j++)
            cout << "8";
        if (t % 2 != 0)
        {
            cout << "9";
        }
    }
    return 0;
}