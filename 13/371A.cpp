#include<iostream>

using namespace std;

const int MAXN = 100;
int a[MAXN];

int minim(int id, int n, int k)
{
	int n1 = 0, n2 = 0;
	for (int i = 0; i < n / k; i++) (a[i * k + id] == 1 ? ++n1 : ++n2);
	if (n1 < n2) return n1;
	else return n2;

}

int main()
{
	int n, k, fin = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < k; i++)
	{
		fin += minim(i, n, k);

	}
	cout << fin;

	return 0;
}