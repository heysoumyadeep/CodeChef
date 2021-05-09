#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n;
	cin>>n;
	while(n--){
		string s;
		cin >> s;
		int group = 0, one = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1') 
				one++;
			else {
				if (one >= 1)
					group++;
				one = 0;
			}
		}
		cout << (one > 0 ? group + 1 : group) << endl;
	}
}