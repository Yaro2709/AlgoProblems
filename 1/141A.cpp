#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() 
{
    string a, b, z, s;

    cin >> a >> b;
    cin >> z;

    s = a + b;

    sort(s.begin(), s.end());
    sort(z.begin(), z.end());

    if (z == s) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}