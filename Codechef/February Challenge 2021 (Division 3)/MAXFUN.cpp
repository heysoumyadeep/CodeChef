#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int i,n,max=0,min=0;
        cin>>n;
        long long int ar[n];
        for(i=0; i<n; i++)
            cin>>ar[i];
        max = min = ar[0];
        for(i=0;i<n;i++)
        {
            if(max<ar[i])
                max = ar[i];
            if(min>ar[i])
                min = ar[i];
        }
        cout<<2*(max-min)<<endl;
    }
}
