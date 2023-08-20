#include<iostream>

using namespace std;

void cf() {

    string t, a, b;
    cin >> t;
    for (int i = 0; i < t.length(); i++) {
        a += t[i];
        if (t[i] != 'a')b += t[i];
        if (a.length() + b.length() == t.length())break;
    }
    if (t == a + b)cout << a << endl;
    else {
        cout << ":(" << endl;
    }

}

int main() 
{
    cf();

    return 0;
}