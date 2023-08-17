#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, k = 1, t = 1, q = 1;
		cin >> n; 
		int *A = new int[n]; 
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		sort(A, A + n);
		for (int i = 1; i < n; i++) {
			if (A[i] == A[i - 1]) { k++; }
			else { t = max(t, k); k = 1; q++; }
		}
		t = max(t, k);
		if (t < q)			cout << t << "\n";
		else if (t == q)	cout << q - 1 << "\n";
		else				cout << q << "\n";

		delete[] A;
	}

	return 0;
}