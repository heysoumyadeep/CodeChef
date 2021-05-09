#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++) 
		if (x % i == 0) 
			return false;
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		r++;
		while (!isPrime(r)) 
			r++;
		cout << r << endl;
	}
	return 0;
}