#include<iostream>
#include<vector>

using namespace std;

#define nmax 100005
vector<int> v[nmax];
int n, m, d1, d2;

void read() {
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void nrNodes() {
    for (int i = 1; i <= n; i++) {
        if (v[i].size() == 1)d1++;
        else if (v[i].size() == 2)d2++;
    }
    if (d1 == 2 && d2 == n - 2) {
        cout << "bus topology";
    }
    else if (d1 == n - 1 && d2 == 0) {
        cout << "star topology";
    }
    else if (d1 == 0 && d2 == n) {
        cout << "ring topology";
    }
    else {
        cout << "unknown topology";
    }
}

int main() {
    read();
    nrNodes();
    return 0;
}