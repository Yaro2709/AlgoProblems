#include <iostream>
#include <map>

using namespace std;

map<string, string> a;

int main() {
    int n, m;
    cin >> n >> m;
    while (n--) {
        string x;
        cin >> x;
        string y;
        cin >> y;
        y += ";";
        a[y] = x;
    }
    while (m--) {
        string x, y;
        cin >> x >> y;
        cout << x << " " << y << " #" << a[y] << endl;
    }
    return 0;
}