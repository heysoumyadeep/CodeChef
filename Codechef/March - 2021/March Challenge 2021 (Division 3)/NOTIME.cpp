#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int n,h,x,flag;
	cin>>n>>h>>x;
	while(n--){
		flag = 0;
		int a;
		cin>>a;
		if(h<=x+a)
		{
			flag = 1;
			break;
		}
	}

	if(flag)
		cout<<"YES";
	else
		cout<<"NO";

}