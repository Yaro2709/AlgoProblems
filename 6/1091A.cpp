#include <iostream>

using namespace std;

int a, b, c;

void input() {
    cin >> a >> b >> c;
}
void solveout() {
    cout << 3 * (min(a + 1, min(b, c - 1)));
}
int main() {
    input(); 
    solveout();

    return 0;
}