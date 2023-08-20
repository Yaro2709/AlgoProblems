#include<iostream>
#include<math.h>

using namespace std;

#define ll long long int

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
int main() {
	ll n, k, p, i;
	cin >> n >> k;
	p = (ll)pow(10, k);
	i = gcd(n, p);
	cout << (n * p / i);

	return 0;
}