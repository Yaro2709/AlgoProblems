#include<iostream>

using namespace std;

int main() 
{
    long long int A, B, x, y, z;
    cin >> A >> B >> x >> y >> z;
    A -= 2 * x + y;
    B -= y + 3 * z;
    cout << max(0LL, -A) + max(0LL, -B) << endl;

    return 0;
}