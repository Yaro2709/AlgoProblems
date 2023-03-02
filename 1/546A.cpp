#include <iostream>

using namespace std;

int main()
{
    int w;
    int money;
    int i;

    cin >> w;
    cin >> money;
    cin >> i;

    int sum = 0;
    for (int j = 1; j <= i; j++) {
        sum += w * j;
    }

    int duty = 0;
    if (sum > money) {
        duty = sum - money;
    }
    else {
        duty = 0;
    }

    cout << duty << endl;
}