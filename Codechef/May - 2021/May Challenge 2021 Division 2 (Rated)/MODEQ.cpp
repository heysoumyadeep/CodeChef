#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define loop(i, n) for (long long i = 0; i < n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
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
    ll n, m;
    cin >> n >> m;
    ll res = 0;
    vll mod(n + 1, 1);
    for (ll i = 2; i <= n; i++)
    {
        
        ll temp = m % i;
        res += mod[temp];
        for (ll j = temp; j <= n; j += i)
            mod[j]++;
    }

    cout << res << '\n';
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