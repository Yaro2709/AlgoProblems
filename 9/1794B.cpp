#include<iostream>
#include<vector>

using namespace std;

#define f(i,n) for(in i=0;i<n;i++)
#define in long long

int main() {
    in t;
    cin >> t;
    while (t--) {
        in n;
        cin >> n;
        vector<in>v(n);
        f(i, n) { cin >> v[i]; }
        f(i, n) { if (v[i] == 1) { v[i]++; } }
        f(i, n - 1) {
            if (v[i + 1] % v[i] == 0) { v[i + 1]++; }
        }
        f(i, n) { cout << v[i] << " "; }
        cout << endl;
    }
    return 0;
}