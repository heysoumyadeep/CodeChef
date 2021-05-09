#include<iostream>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n,even=0,odd=0,num=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            if(num%2 == 0)
            even++;
            else  
            odd++;
        }
        if(odd%2 == 1)
        cout<<"2"<<endl;
        else
        cout<<"1"<<endl;
    }
}
