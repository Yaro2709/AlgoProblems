#include<iostream>

using namespace std;

int main() {
    int n, c = 0; 
    cin >> n;
    char** arr = new char* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new char[n];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 'C') continue;
            for (int a = j + 1; a < n; a++)if (arr[i][a] == 'C')c++;
            for (int b = i + 1; b < n; b++)if (arr[b][j] == 'C')c++;
        }
    }
    cout << c;

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i]; 
    }
    delete[] arr; 

    return 0;
}