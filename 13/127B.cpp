#include <iostream>

using namespace std;

int main()
{
    int n, a, count[101] = { 0 };
    cin >> n;
    while (n--)
    {
        cin >> a;
        count[a] += 1;
    }
    int total = 0;
    for (int i = 1; i <= 100; ++i)
    {
        total += count[i] / 2;
    }
    cout << total / 2 << endl;

    return 0;
}