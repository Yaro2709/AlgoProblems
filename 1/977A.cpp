#include <iostream>

using namespace std;

int main()
{
    int number;
    int value;

    cin >> number;
    cin >> value;

    for (int i = 0; i < value; i++) {
        if (number % 10 == 0) {
            number /= 10;
        }
        else {
            number -= 1;
        }
    }

    cout << number << endl;
}