#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char name[256];
    char cinName[256];
    char revName[256] = { "" };

    cin >> name;
    cin >> cinName;

    for (int i = 0; i <= strlen(name); i++) {
        revName[i] = name[strlen(name) - i];
    }

    int flag = 0;
    for (int i = 0; i <= strlen(name); i++) {
        //C++ в конец ставит доп символ, поэтому необходимо сделать смещение при сравнение.
        if (revName[i + 1] != cinName[i]) {
            flag += 1;
        }
    }

    if (flag > 0) {
        cout << "NO" << endl;
    }
    else if(flag == 0) {
        cout << "YES" << endl;
    }
}