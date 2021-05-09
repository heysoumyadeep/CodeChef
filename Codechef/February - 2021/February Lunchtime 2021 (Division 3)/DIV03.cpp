#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll max(ll a, ll b) {
	return (a > b ? a : b);
}

int main()
{
    ll t,k;
    vector<ll> A(10);
    cin>>t;
    while(t--)
    {
        for(int i = 0; i <10;i++)
            cin>>A[i];
        cin>>k;

        for(int i = 9;i>=0;i--)
        {
            if(k>0)
            {
                ll temp = A[i];
				A[i] = max(0, A[i] - k);
				k -= temp;
                // if(A[i] - k >= 0)   
                //     A[i] = A[i] - k;
                // else
                //     A[i] = 0;
                // k = k - A[i];
            }          

            // cout<<k<<" ";
        }

        int diff = 0;

        for (int i = 9; i >= 0; i--) 
			if (A[i] > 0) 
            {
				diff = i + 1;
				break;
			}
		cout << diff << endl;
                  
    }
}