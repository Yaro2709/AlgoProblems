#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int  x[4];
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    sort(x, x + 4);
    if (x[3] < x[1] + x[2] || x[3] < x[0] + x[2] || x[2] < x[0] + x[1])cout << "TRIANGLE";
    else if (x[3] == x[1] + x[2] || x[3] == x[0] + x[2] || x[2] == x[0] + x[1])cout << "SEGMENT";
    else cout << "IMPOSSIBLE";

    return 0;
}