#include <iostream>

using namespace std;

bool isHappy(int hh, int mm)
{
    return mm % 10 == 7 || hh % 10 == 7;
}

int main()
{
    int x;
    cin >> x;
    int hh, mm;
    cin >> hh >> mm;

    int y = 0;
    int hhCur = hh;
    int mmCur = mm;
    while (true) {
        if (isHappy(hhCur, mmCur)) {
            cout << y;
            return 0;
        }

        if (mmCur >= x) {
            mmCur -= x;
        }
        else {
            mmCur += 60;
            mmCur -= x;
            hhCur -= 1;
            if (hhCur < 0) {
                hhCur = 23;
            }
        }

        y++;
    }

    return 0;
}