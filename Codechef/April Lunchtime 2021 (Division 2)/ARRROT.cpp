#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n , q;
    cin >> n;
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        sum = (sum + x + 1000000007) % 1000000007; 
    }

    cin >> q;
    while(q--){
        sum = (2*sum) % 1000000007;
        cout << sum << endl;
    }
    return 0;
}
