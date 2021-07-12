//Wrong Answer

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
        ll ans = 0;
		ll n;
		cin >> n;
		vector<ll> v;
		for (ll i = 2; i <= n; ++i)
		{
			if (isPrime(i)) {
				ans++;
				v.push_back(i);
			}
		}
		int z = 0;
		for (int i = 0; i < (v.size() - 1); ++i)
		{
			for (int j = max((i + 1), z); j < v.size() ; ++j)
			{
				if (v[i]*v[j] <= n)
				{
					ans--;
					z = j;
				}
				else
					break;
			}
		}
		cout << ans << endl;
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