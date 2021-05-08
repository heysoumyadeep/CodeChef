#include<bits/stdc++.h>
using namespace std;

int find(vector<char>v1, vector<char>v2)
{
    int c = 0;
    set<char> s(v1.begin(),v1.end());
    for(auto i : v2)
    {
        if(s.find(i)!=s.end())
            c++;
    }
    return c;  
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        for(int i = 0;i<1000;i++)
            for(int i = 0;i<1000;i++)
                for(int i=0;i<1000;i++)
                    for(int i=0;i<1000;i++)
                        i=i+0;
        int n;
        cin>>n;
        map<string,vector<char>> m;

        string str;

        for(int i=0;i<n;i++)
        {
            cin>>str;
            if(str.length())
                m[str.substr(1,str.length())].push_back(str[0]);
        }

        int c = 0;

        for(auto i : m)
        {
            for(auto j: m)
            {
                if(i.first!=j.first)
                {
                    int x = find(i.second,j.second);
                    c+= (i.second.size() - x)*(j.second.size() - x);
                }
            }
        }
        cout<<c<<endl;

    }
    return 0;
}
