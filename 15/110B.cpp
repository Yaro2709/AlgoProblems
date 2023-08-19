#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char tp = 'a';
    while (n--) {
        putchar(tp);
        if (tp == 'd')
            tp = 'a';
        else ++tp;
    }

    return 0;
}