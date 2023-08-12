#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	if (s.size() < 5) { 
		cout << "Too weak";  
		return 0; 
	}
	bool p = false, q = false, l = false;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') { 
			p = true; 
		}
		else if (s[i] >= 'a' && s[i] <= 'z') { 
			q = true; 
		}
		else if (s[i] >= '0' && s[i] <= '9') { 
			l = true; 
		}
	}
	if (p == true && q == true && l == true) { 
		cout << "Correct"; 
	}
	else {
		cout << "Too weak";
	}

	return 0;
}