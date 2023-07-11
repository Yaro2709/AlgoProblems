#include <iostream>

using namespace std;

int main()
{
    int a, b;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cout << alpha[i % b];
    }

    return 0;
}