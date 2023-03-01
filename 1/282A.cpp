#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count;
    string text;
   
    cin >> count;

    int sum = 0;
    for (int i = 0; i < count; i++) {
        cin >> text;
        if ((text == "++X") || (text == "X++")) {
            sum += 1;
        }
        else if ((text == "--X") || (text == "X--")) {
            sum -= 1;
        }
        else {}
    }
    cout << sum;
}