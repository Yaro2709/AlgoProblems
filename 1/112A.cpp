#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[102], b[102];
    cin >> a;
    cin >> b;
    for (int i = 0; i < strlen(a); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    cout << strcmp(a, b);
}