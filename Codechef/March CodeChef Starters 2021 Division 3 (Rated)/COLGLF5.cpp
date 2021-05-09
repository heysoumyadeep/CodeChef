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
        ll n, m, c=0, flag = 0;
        cin >> n >> m;
        ll F[n],C[m];
        
        map<int,string> map;

        for(int i = 0; i < n; i++){
            cin>>F[i];
            map.insert(make_pair(F[i],"F"));
        }
            
        for(int i = 0; i < m; i++){
            cin>>C[i];
            map.insert(make_pair(C[i],"C"));
        }
		
        for(auto i: map){
            if(i.second == "F"){
                if(flag == 1){
                    c++;
                    flag = 0;
                }
            }
            else if(i.second == "C")
            {
                if(flag == 0)
                {
                    c++;
                    flag = 1;    
                }                         
            }
        }
        
		cout << c << endl;
    }
    return 0;
}