#include<iostream>
#include<map>

using namespace std;

int main() {
    long long int a, b, m, r, i = 0;
    cin >> a >> b >> m >> r;
    map<int, int>counter;
    bool ok = true;
    while (ok) {
        r = (a * r + b) % m;
        if (counter[r] == 0)counter[r] = i;
        else { ok = false; cout << i - counter[r] << endl; }
        i++;
    }
    return 0;
}