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
        float x, y, X, Y, D;
        cin >> x >> y >> X >> Y >> D;

        x /= X;
		y /= Y;
		cout << (min(x, y) >= D ? "YES" : "NO") << '\n';
    }
    return 0;
}