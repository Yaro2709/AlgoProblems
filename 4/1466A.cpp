#include <iostream>
#include <vector>
#include<set>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        set<int> s;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                s.insert(x[j] - x[i]);
            }
        }

        cout << s.size() << endl;
    }

    return 0;
}