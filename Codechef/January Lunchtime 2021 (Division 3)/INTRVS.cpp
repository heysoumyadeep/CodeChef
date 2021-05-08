#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N, W, Wr;
        map<int, int> map;
        cin >> N >> W >> Wr;
        ll w[N];
        for (ll i = 0; i < N; i++)
        {
            cin >> w[i];
            map[w[i]]++;
        }

        if (Wr >= W)
            cout << "YES" << endl;
        else
        {
            W-=Wr;
            for (ll i = 0; i < N; i++)
            {
                if (map[w[i]] > 1)
                {
                    ll temp = map[w[i]];
                    if (temp % 2 == 0)
                        W-= temp * w[i];
                    else
                        W-=(temp - 1) * w[i];
                    map[w[i]] = 0;
                }
                if (W <= 0)
                    break;
            }
            if (W <= 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
