#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char lng[100];

    cin >> lng;

    int count_toupper = 0;
    int count_tolower = 0;

    for (int i = 0; i < strlen(lng); i++) {
        if (isupper(lng[i])) {
            count_toupper += 1;
        }
        else {
            count_tolower += 1;
        }
    }
    
    for (int i = 0; i < strlen(lng); i++) {
        if (count_toupper > count_tolower) {
            lng[i] = toupper(lng[i]);
        }
        else {
            lng[i] = tolower(lng[i]);
        }
    }

    cout << lng << endl;
}