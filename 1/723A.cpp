#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    int x[3]; 
    
    cin >> x[0];
    cin >> x[1];
    cin >> x[2];

    int min = 101;
    int max = 0;
    int min_i = 0;
    int max_i = 0;
    for (int i = 0; i < 3; i++) {
        if (max < x[i]) {
            max = x[i];
            max_i = i;
        }
        if (min > x[i]) {
            min = x[i];
            min_i = i;
        }
    }

    int center = (max + min) / 2;

    int s1 = abs(x[min_i] - center);
    int s2 = abs(x[max_i] - center);

    cout << s1 + s2 << endl;

    return 0;
}