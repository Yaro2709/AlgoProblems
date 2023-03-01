#include <iostream>
 
using namespace std;
 
int main()
{
	int amount, tasks = 0;
	cin >> amount;
 
	int a1[1100] = { 0 }, a2[1100] = { 0 }, a3[1100] = { 0 };
	
	
	for (int i = 0; i < amount; i++) {
		cin >> a1[i] >> a2[i] >> a3[i];
	}
 
	for (int j = 0; j < amount; j++) {
		if (a1[j] + a2[j] + a3[j] >= 2) {
			 tasks += 1;
		}
	}
 
	cout << tasks << endl;
}