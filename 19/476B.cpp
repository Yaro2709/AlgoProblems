#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>

using namespace std;

double c(long long x, long long y)
{
	double sum = 1;
	for (long long i = x; i >= x - y + 1; i--)  sum = sum * i;
	for (long long i = y; i >= 1; i--) sum = (sum / i * (1.0));
	return sum;
}

int main()
{
	string a, b; int i, p, m, q;
	cin >> a >> b;
	for (i = 0; i < a.length(); i++) if (a[i] == '+') p++; else m++;
	for (i = 0; i < b.length(); i++) if (b[i] == '+') p--; else if (b[i] == '-') m--; else q++;
	if (p < 0 || m < 0) cout << "0";
	else if (p == 0 && m == 0) cout << "1";
	else
	{
		cout << fixed << setprecision(12) << c(q, p) / pow(2, q);
	}

	return 0;
}