#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> ans;
    int n; 
    string s;
    cin >> n >> s;

    if (s[n - 1] == 'B') { 
        s += 'W'; 
        ++n; 
    }

    int t = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            ++t;
        }
        else {
            if (t > 0) {
                ans.push_back(t);
            }
            t = 0;
        }
    }
    cout << ans.size() << endl;
    for (int i : ans) {
        cout << i << ' ';
    }

    return 0;
}