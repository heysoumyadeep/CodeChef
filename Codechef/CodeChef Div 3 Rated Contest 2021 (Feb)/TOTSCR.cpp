#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[k];
        for (ll i = 0; i < k; i++)
            cin>>a[i];

        for (ll i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            ll l=s.length();
            ll ans=0;
            for (ll j = 0; j < l; j++)
            {
                if(s[j]=='1')
                    ans+=a[j];
                else
                    ans+=0;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
