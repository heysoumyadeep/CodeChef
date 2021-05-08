#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    
    if(n == 1)
        cout<<"1";
    else{
        for(int i=1; i<=10; i++)
        {
            if(n%i == 0)
                c = i;
        }
        cout<<c;
    }
}
