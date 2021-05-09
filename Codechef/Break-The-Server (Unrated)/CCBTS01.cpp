#include <stack>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string a;
        cin>>a;
        for(int i=1; i<3; i++)
        {
            if(a[i-1] == 'P' && a[i] == 'C' && a[i+1] == 'M')
                count++;
            else if(a[i-1] == 'P' && a[i] == 'M' && a[i+1] == 'C')
                count++;
            else if(a[i-1] == 'C' && a[i] == 'M' && a[i+1] == 'P')
                count++;
            else if(a[i-1] == 'C' && a[i] == 'P' && a[i+1] == 'M')
                count++;
            else if(a[i-1] == 'M' && a[i] == 'P' && a[i+1] == 'C')
                count++;
            else if(a[i-1] == 'M' && a[i] == 'C' && a[i+1] == 'P')
                count++;
        }

        if(count == 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;

}