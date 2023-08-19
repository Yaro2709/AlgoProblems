#include<iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n, m;
    fin >> n >> m;
    int i, j;
    for (i = 1, j = 1; i <= n && j <= m; i++, j++)
    {
        if (n > m)
            fout << "BG";
        else
            fout << "GB";
    }
    while (i <= n)
    {
        fout << "B";
        i++;
    }
    while (j <= m)
    {
        fout << "G";
        j++;
    }
    return 0;
}