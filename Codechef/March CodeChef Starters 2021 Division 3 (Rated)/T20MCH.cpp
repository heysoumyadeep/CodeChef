#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int r, o, c;
	cin >> r >> o >> c;
	int overs = 20 - o;
	int times = overs * 6;
	int max = times * 6;
	cout << (c + max > r ? "YES" : "NO") << endl;
    return 0;
}