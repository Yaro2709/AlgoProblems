#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int  main()
{
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long>  vec(n);
        for (auto& i : vec) {
            cin >> i;
        }
        vector<long long> cnt(33, 0);
        for (long long i = 0; i < n; i++) {
            cnt[(long long)log2(vec[i])]++;
        }
        long long ans = 0;
        for (long long i = 0; i < 33; i++) {
            ans += cnt[i] * (cnt[i] - 1) / 2;
        }
        cout << ans << '\n';
    }

    return 0;
}