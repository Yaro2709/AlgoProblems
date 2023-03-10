#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0) { //если число четное, то оно делится на 2
        cout << 4 << " " << a - 4 << endl;
    }
    else { //в других случаях оно не четное
        cout << 9 << " " << a - 9 << endl;
    }
}