#include <iostream>

using namespace std;

int main() {

    int long long a,b,c,d;
    int k = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    if (a == b or a == c or a == d)k++;
    if (b == c or b == d)k++;
    if (c == d)k++;

    cout << k;

    return 0;
}