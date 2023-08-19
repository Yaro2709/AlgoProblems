#include<iostream>

using namespace std;

#define ll long long int

ll cur;

ll gLucky(ll lucky) {
    if (lucky >= cur)
        return lucky;

    return min(gLucky(lucky * 10 + 7),
        gLucky(lucky * 10 + 4));
}

int main() {
    ll l, r, lucky, ans = 0;
    cin >> l >> r;
    cur = l;
    while (cur <= r) {
        lucky = gLucky(0);
        ans += (min(lucky + 1, r + 1) - cur) * lucky;
        cur = lucky + 1;
    }
    cout << ans;
    return 0;
}