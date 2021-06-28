#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mod 1000000007
#define mp make_pair
#define map map<int, int>
#define sort(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
bool isPrime(ll num){if(num<2)return false;for(ll i=2;i<=sqrt(num);i++)if(num%i==0)return false;return true;}

void solve()
{
    ll A, B, r = 1, x;
    cin >> A >> B;
    x = log2(B);
    for (ll i = 1; i <= x; i++)
        r*=2;

    if (r == B)
        cout << "Yes";
    else
        cout << "No";

    cout << '\n';
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}