#include<iostream>

using namespace std;

int main() 
{
    int t; 
    cin >> t;

    for (int j = 0; j < t; j++) {
        string name;
        cin >> name;

        int A = 0;
        int B = 0;
        int C = 0;
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'A') {
                A += 1;
            }
            else if (name[i] == 'B') {
                B += 1;
            }
            else if (name[i] == 'C') {
                C += 1;
            }
        }
        
        if ((A + C) == B) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}