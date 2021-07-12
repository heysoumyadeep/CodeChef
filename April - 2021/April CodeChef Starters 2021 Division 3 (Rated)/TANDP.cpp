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
        int N, M;
        cin >> N >> M;
        int x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        int th = (N - x) + (M - y);
        int p = max((N - a),(M - b));
        if(th<=p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}