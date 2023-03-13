#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int sprint[4];
        for (int i = 0; i < 4; i++) {
            cin >> sprint[i];
        }

        int nubmer = 0;
        for (int i = 1; i < 4; i++) {
            if (sprint[0] < sprint[i]) {
                nubmer += 1;
            }
        }

        cout << nubmer << endl;
    }

    return 0;
}