#include<iostream>

using namespace std;

int c;
int n;

void  fun(int x) {
    if (x <= n) {
        c++;
        fun(10 * x + 0);
        fun(10 * x + 1);
    }
    else
        return;

}

int main()
{
    cin >> n;
    c = 0;
    fun(1);
    cout << c << endl;

    return 0;
}