#include<iostream>
#include<vector>

using namespace std;

int main() {
    int a, n, b;
    cin >> n;
    cin >> a;
    int s = a;
    int os = a;
    vector <int> t;
    t.push_back(0);
    for (int i = 1; i < n; ++i) {
        cin >> b;
        s += b;
        if (a / 2 >= b) {
            os += b;
            t.push_back(i);
        }
    }
    if (os > s / 2) {
        cout << t.size() << endl;
        for (int i = 0; i < t.size(); ++i)
            cout << t[i] + 1 << " ";

    }
    else cout << 0;

    return 0;
}