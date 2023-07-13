#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    int ans = 0;
    int cnt = 0;
    for (int i = 0, x; i < 2 * n; ++i)
    {
        cin >> x;
        if (v[x] == 0) {
            ++cnt;
            ++v[x];
        }
        else {
            --cnt;
            --v[x];
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}