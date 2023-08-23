#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    long long int a, b, c, d, e, f = 0;
    cin >> a;
    vector<long long int> odd;
    while (a--) {
        cin >> b;
        if (b % 2)
            odd.push_back(b);
        else
            f += b;
    }
    e = 0;
    sort(odd.begin(), odd.end());
    if (odd.size() % 2 == 0)
        e++;
    for (; e < odd.size(); e++)
        f += odd[e];
    if (odd.size() == 0)
        cout << "0";
    else
        cout << f;

    return 0;
}