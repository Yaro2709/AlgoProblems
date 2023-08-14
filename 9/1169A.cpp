#include <iostream>

using namespace std;

int main() 
{
    int a, b, c, d, n;
    cin >> n >> a >> b >> c >> d;
    int s1 = a, s2 = c;
    while (s1 != b && s2 != d) {
        s1++;
        s2--;
        if (s1 > n) { 
            s1 = 1; 
        }
        if (s2 < 1) { 
            s2 = n; 
        }
        if (s1 == s2) { 
            cout << "YES"; 
            return 0; 
        }


    }
    cout << "NO";

    return 0;
}