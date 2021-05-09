#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,h;
    cin >> t;
    while (t--)
    {
        cin>>m>>h;
        double res = m/(h*h);

        if(res <=18)
            cout<<1<<endl;
        else if(res>=19 && res<=24)
            cout<<2<<endl;
        else if(res>=25 && res<=29)
            cout<<3<<endl;
        else if(res>=30)
            cout<<4<<endl;

    }
    return 0;

}