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
        ll n,x;
        cin >> n >> x;

        ll a;

        set<ll, greater<ll>> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.insert(a);
        }

        if(s.size()<=n-x)
            cout<<s.size()<<endl;
        else
            cout<<n-x<<endl;
    }
    return 0;
}