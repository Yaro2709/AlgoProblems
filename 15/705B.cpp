#include<iostream>

using namespace std;

int main()
{
    int n, x, moves = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        moves += x - 1;
        if (moves % 2)cout << "1" << endl;
        else cout << "2" << endl;
    }
    return 0;
}