#include <iostream>

using namespace std;

int main() 
{
    int n;

    cin >> n;

    int* mas = new int[n];
    int* number = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }

    int** matrix = new int* [n];

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[5];
    }

    for (int i = 0; i < n; i++) {
        matrix[i][0] = mas[i] % 10;
        matrix[i][1] = mas[i] % 100 - matrix[i][0];
        matrix[i][2] = mas[i] % 1000 - matrix[i][0] - matrix[i][1];
        matrix[i][3] = mas[i] % 10000 - matrix[i][0] - matrix[i][1] - matrix[i][2];
        matrix[i][4] = mas[i] % 100000- matrix[i][0] - matrix[i][1] - matrix[i][2] - matrix[i][3];
    }

    for (int i = 0; i < n; i++)
    {
        number[i] = 0;
        for (int j = 0; j <= 4; j++)
        {
            if (matrix[i][j] != 0) {
                number[i] += 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << number[i] << endl;
        for (int j = 0; j <= 4; j++)
        {
            if (matrix[i][j] != 0) {
                cout << matrix[i][j] << endl;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    delete[] mas;
    delete[] number;

    return 0;
}