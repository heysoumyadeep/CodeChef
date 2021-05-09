#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll d = (n % k == 0 ? n / k : (n + k - 1) / k);
		ll x = (n % k != 0 ? n % k : k);
        
		cout << d << " " << x << endl;
    }
    return 0;
}