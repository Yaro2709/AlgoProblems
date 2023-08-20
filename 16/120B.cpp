#include<iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    ofstream output;
    input.open("input.txt");
    output.open("output.txt");
    int n, k;
    input >> n >> k;
    bool* a = new bool[n];
    for (int i = 0; i < n; i++)
        input >> a[i];
    int i = k - 1;
    while (a[i] == 0)
    {
        if (i == n - 1) i = 0;
        else i++;
    }
    delete[]a;
    output << i + 1 << endl;
    input.close();
    output.close();

    return 0;
}