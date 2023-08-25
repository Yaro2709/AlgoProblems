#include<iostream>

using namespace std;

int main() {
    int n;
    string a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        bool yes = false;
        for (int i = 0; i < a.size(); ++i) {
            string temp = "";
            for (int j = 0; j <= i; ++j) {
                temp += a[j];
            }
            for (int j = i - 1; j >= 0; --j) {
                temp += a[j];
            }
            if (temp.find(b) != string::npos) {
                yes = true;
                break;
            }
        }
        if (yes == true) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }

    return 0;
}