#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mod 1000000007
#define mp make_pair
#define f first
#define s second
#define map map<int, int>
#define sort(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
bool isPrime(ll num)
{
    if (num < 2)
        return false;
    for (ll i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

void solve()
{
        ll n, k;
		cin >> n >> k;
		vll v;
		int ans = 0;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			v.push_back((s[i] - 48));
			if (i > 0)
			{
				if (v[i - 1] == v[i])
					ans += 2;
				else
					ans += 1;
			}
		}

		for (int i = 0; i < k; i++)
		{
			int ch;
			cin >> ch;
			v[ch - 1] = v[ch - 1] ? 0 : 1;
			if ((ch - 1) > 0)
			{
				if (v[ch - 1] == v[ch - 2])
					ans += 1;
				else
					ans -= 1;
			}
            
			if ((ch - 1) < (n - 1))
			{
				if (v[ch - 1] == v[ch])
					ans += 1;
				else
					ans -= 1;
			}
			cout << ans << endl;
		}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}