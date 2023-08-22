#include<iostream>
#include<set>

using namespace std;

int main() {
    long long b;
    cin >> b;
    int sq = 100001, c = 0;
    set<long long> s;
    for (int i = 1; i <= sq; i++) {
        if (b % i == 0) {
            s.insert(i);
            s.insert(b / i);
        }
    }
    cout << s.size() << endl;

    return 0;
}