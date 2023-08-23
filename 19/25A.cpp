#include<iostream>

using namespace std;

int main() {
    int a, n, o = 0, e = 0, i, e1, o1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
            e++, e1 = i;
        else
            o++, o1 = i;
    }
    if (e > o)cout << o1;
    else cout << e1;

    return 0;
}