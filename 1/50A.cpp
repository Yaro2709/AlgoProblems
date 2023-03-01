#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a;
    cin >> b;

	c = a * b;
    
    //при округлении int хвост отрезается
	cout << ((a * b) / 2);
}