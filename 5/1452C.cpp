#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int round1 = 0, square1 = 0, round2 = 0, square2 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                round1 += 1;
            }
            else if (s[i] == '[') {
                square1 += 1;
            }
            else if (s[i] == ')') {
                if (round1 > round2) {
                    round2 += 1;
                }
            }
            else if (s[i] == ']') {
                if (square1 > square2) {
                    square2 += 1;
                }
            }
        }

        int round = min(round1, round2);
        int square = min(square1, square2);

        cout << (round + square) << endl;
    }
    
    return 0;
}