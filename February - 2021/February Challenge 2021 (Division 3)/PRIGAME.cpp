#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool prime(ll n)
{
    for(ll i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    ll t,i,c=0;
    scanf("%lld",&t);
    ll p[1000001];

    for(i=2;i<=1000000;i++)
    {
        if(prime(i))
            c++;
        p[i] = c;
    }
    
    p[0] = p[1] = 0;

    while(t--)
    {
        ll x,y;
        scanf("%lld%lld",&x,&y);
        if (p[x]<=y)
            printf("Chef\n");
        else
            printf("Divyam\n");
    }

    return 0;
}
