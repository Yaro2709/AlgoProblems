#include <iostream>

using namespace std;

int main()
{
    int n, a, i;
    a = i = 0;
    string x;
    cin >> n >> x;
    for (int j = 0; j < n; j++) {
        if (x[j] == 'A')
            a++;
        else if (x[j] == 'I')
            i++;
    }
    if (i > 1) {
        cout << 0;
    }
    else if (i)
        cout << 1;
    else
        cout << a;

    return 0;
}