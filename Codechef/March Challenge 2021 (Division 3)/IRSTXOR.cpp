#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll t;
	cin >> t;
	while (t--) 
	{ 
		ll n,a,b,d; 
		cin >> n; 
		d = pow(2, (int(log2(n)) + 1)); 
		b = (d/2) - 1;
		a = b ^ n;
		cout << a * b << endl;
	}
}