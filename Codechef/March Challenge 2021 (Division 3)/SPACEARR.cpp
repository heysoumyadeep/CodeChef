#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void space()
{
	int n, ans = 0;
	cin >> n;
	vector<int> arr(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] > i)
		{
			cout << "Second" << endl;
			return;
		}
		ans += i - arr[i];
	}
	if (ans % 2)
		cout << "First" << endl;
	else
		cout << "Second" << endl;
}

int main()
{
	ll t;
	cin >> t;
	while (t--)
		space();
	return 0;
}