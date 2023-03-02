#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[1000];
    cin >> a;

    a[0] = toupper(a[0]);

    cout << a;
}