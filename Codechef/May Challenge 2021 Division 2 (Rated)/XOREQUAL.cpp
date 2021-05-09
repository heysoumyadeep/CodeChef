#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define M 1000000007
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define loop(i, n) for (long long i = 0; i < n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
bool isPrime(ll num) { if(num < 2) return false; for(ll i = 2; i <= sqrt(num); i++) if(num % i == 0) return false;  return true; }

ll power(ll x, ll n)
{
    if (n == 0)
        return 1;
    ll temp = (power(x, n / 2)) % M;
    if (n % 2 == 0)
        return (temp * temp) % M;
    else
        return (((x * temp) % M) * temp) % M;
}

void solve()
{
    ll n;
    cin>>n;
    ll temp = power(2,n-1);
    cout<<temp<<endl;
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