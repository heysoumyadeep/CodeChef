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
    ll n, k;
    cin >> n;
    vll odd, even;
    for (ll i = 0; i < n; i++){
        cin>>k;
        if(k%2 == 0)
            even.push_back(k);
        else
            odd.push_back(k);
    }
    //merging odd to even
    even.insert(even.end(), odd.begin(), odd.end()); 
    for(auto i: even)
        cout<<i<<" ";

    cout<<'\n';
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