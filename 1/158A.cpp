#include <iostream>
 
using namespace std;
 
int main()
{
	int amount, border, passes = 0;
	cin >> amount >> border;
 
	int bal[200] = { 0 };
	
	for (int i = 0; i < amount; i++) {
		cin >> bal[i];
	}
 
	int j = 0;
	while (bal[j] && bal[j] >= bal[border - 1]) {
		++j;
		passes += 1;
	}
 
	cout << passes << endl;
}