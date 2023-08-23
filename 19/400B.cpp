#include<iostream>
#include<set>

using namespace std;

int n, m, ans, ig, is; char tmp;
set<int> st;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == 'G')
                ig = j;
            else if (tmp == 'S')
                is = j;
        }
        if (is < ig) {
            cout << -1;
            return 0;
        }
        else
            st.insert(is - ig - 1);
    }

    cout << st.size();

    return 0;
}