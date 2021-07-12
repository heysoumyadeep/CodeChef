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
    ll N, M, K;
    int l;
    map m;
    vi v;
    cin >> N >> M >> K;
    while (K--)
    {
        cin >> l;
        m[l]++;
    }

    map::iterator i;
    for (i = m.begin(); i != m.end(); ++i)
        if (i->second > 1 && i->first <= N)
            v.push_back(i->first);

    if (v.size())
    {
        cout << v.size() << " ";
        for (auto i : v)
            cout << i << " ";
    }
    else
        cout << 0 << " ";
    cout << '\n';
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