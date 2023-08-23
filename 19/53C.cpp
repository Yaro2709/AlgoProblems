#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int l = 1;
    int h = n;
    while (l < h)
    {
        cout << l << " ";
        cout << h << " ";
        l++;
        h--;
    }
    if (l == h)
        cout << l;

    return 0;
}