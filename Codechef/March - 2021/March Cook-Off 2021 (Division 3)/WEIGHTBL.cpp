#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;

        cout << (((w2 - w1) < (x1 * m) || (w2 - w1) > (x2 * m)) ? "0" : "1") << endl;
    }
}