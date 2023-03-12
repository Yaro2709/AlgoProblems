#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int s = 0, d = 0, b = 0, e = n - 1, c;
    
    int* cards = new int [n];
 
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (cards[b] > cards[e]) {
            c = cards[b++];
        }
        else {
            c = cards[e--];
        }
 
        if (i % 2 == 0) { 
            s += c; 
        }
        else
        {
            d += c;
        }
    }
 
    cout << s << ' ' << d;
 
    return 0;
}