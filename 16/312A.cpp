#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        bool f1 = false, f2 = false;
        if (s.substr(0, 5) == "miao.")
            f2 = true;
        if (s.length() >= 5 && s.substr(s.length() - 5, 5) == "lala.")
            f1 = true;
        if (f1 && f2) {
            cout << "OMG>.< I don't know!";
        }
        else if (f1)
            cout << "Freda's";
        else if (f2)
            cout << "Rainbow's";
        else
            cout << "OMG>.< I don't know!";
        cout << endl;
    }
    return 0;
}