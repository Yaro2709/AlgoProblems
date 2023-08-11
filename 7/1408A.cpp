#include<iostream>
#include<set>

using namespace std;

int main() {
	int T; 
	cin >> T;
	while (T--) {
		int N; cin >> N;
		int A[101], B[101], C[101];
		for (int i = 0; i < N; i++) cin >> A[i];
		for (int i = 0; i < N; i++) cin >> B[i];
		for (int i = 0; i < N; i++) cin >> C[i];

		int x = -1;
		for (int i = 0; i < N - 1; i++) {
			if (x != A[i]) cout << A[i] << ' ', x = A[i];
			else cout << B[i] << ' ', x = B[i];
		}

		set<int> st;
		st.insert(A[N - 1]);
		st.insert(B[N - 1]);
		st.insert(C[N - 1]);

		st.erase(A[0]); st.erase(x);
		cout << *st.begin() << endl;
	}

	return 0;
}