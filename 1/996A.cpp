#include <iostream>

using namespace std;

int main() 
{
    long long total, sum = 0;

    cin >> total;

    sum += total / 100;
    sum += (total % 100) / 20;
    sum += (total % 20) / 10;
    sum += (total % 10) / 5;
    sum += (total % 5) / 1;

    cout << sum;

    return 0;
}