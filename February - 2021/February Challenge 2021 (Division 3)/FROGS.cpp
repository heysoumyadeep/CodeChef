#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> w(n);
        vector<int> j(n);
        for(int i=0;i<n;i++)
            cin>>w[i];
        for(int i=0;i<n;i++)
            cin>>j[i];
        map<int,pair<int,int>> f;
        for(int i=0;i<n;i++)
            f.insert(make_pair(w[i],make_pair(j[i],i+1)));
        int c=0;
        map<int,pair<int,int>>::iterator itr,i;
        for(itr=f.begin();itr!=f.end();itr++){
            auto k=itr;
            k++;
            for(i=k;i!=f.end();i++)
                while((itr->second).second >= (i->second).second)
                {
                    (i->second).second+=(i->second).first;
                    c+=1;
                }
        }
        cout<<c<<endl;
    }
    return 0;
}
