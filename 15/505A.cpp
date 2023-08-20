#include<iostream>

using namespace std;

int main() {

    string s; 
    cin >> s;
    for (int x = 0; x <= s.length(); ++x) {
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            string temp = s;
            temp.insert(x, &ch, 1);
            string tmp = temp;
            reverse(tmp.begin(), tmp.end());
            if (tmp == temp) { cout << temp; return 0; }
        }
    }

    cout << "NA";

    return 0;
}