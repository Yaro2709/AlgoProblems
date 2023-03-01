#include <iostream>
 
using namespace std;
 
int main()
{
	int amount;
	cin >> amount;
 
	while (amount--)
	{
		string word;
		cin >> word;
		if (word.size() > 10) {
			cout << word[0] << word.size() - 2 << word[word.size() - 1] << "\n";
		}
		else {
			cout << word << "\n";
		}
	}
}