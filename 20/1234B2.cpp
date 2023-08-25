#include<iostream>
#include<map>
#include<list>

using namespace std;

int main() {
    int n, x, k;
    cin >> n >> k;
    map<int, bool> m;
    list<int> l;
    while (n--) {
        cin >> x;
        if (!m[x]) {
            if (l.size() == k) {
                m[l.front()] = false;
                l.pop_front();
            }
            m[x] = true;
            l.push_back(x);
        }
    }
    cout << l.size() << "\n";
    while (!l.empty()) {
        cout << l.back() << " ";
        l.pop_back();
    }

    return 0;
}