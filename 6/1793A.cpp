#include <iostream>
#include <set>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b, m, n;
        cin >> a >> b >> n >> m;
        set<ll> st;
        st.insert(n * a);
        st.insert(n * b);
        st.insert((n / (m + 1)) * a * m + (n % (m + 1)) * a);
        st.insert((n / (m + 1)) * a * m + (n % (m + 1)) * b);
        cout << *st.begin() << endl;
    }

    return 0;
}