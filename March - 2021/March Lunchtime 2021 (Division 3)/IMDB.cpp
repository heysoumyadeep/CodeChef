#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll res = 0;
        for (ll i = 0; i < n; i++)
        {
            ll s, r;
            cin >> s >> r;
            if (s <= x && r > res)
                res = r;
        }
        cout << res << endl;
    }
    return 0;
}