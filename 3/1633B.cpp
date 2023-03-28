#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {        
        string s;
        cin >> s;

        int sum_0 = 0;
        int sum_1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                sum_1 += 1;
            }
            if (s[i] == '0') {
                sum_0 += 1;
            }
        }

        if (sum_1 > sum_0) {
            cout << sum_0 << endl;
        }
        else if (sum_1 < sum_0) {
            cout << sum_1 << endl;
        }else if (sum_1 == sum_0) {
            cout << sum_0 - 1 << endl;
        }
    }

    return 0;
}