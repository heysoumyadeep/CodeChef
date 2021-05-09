#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define loop(i, n) for (long long i = 0; i < n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
bool isPrime(ll num)
{
    if (num < 2)
        return false;
    for (ll i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

void solve()
{
    vector<vector<char>> v(3, vector<char>(3, 'O'));
    ll tX = 0, tO = 0, vX = 0, vO = 0, draw = 0;
    loop(i, 3)
    {
        string s;
        cin >> s;
        loop(j, s.size())
        {
            v[i][j] = s[j];
            if (v[i][j] == 'X')
                tX++;
            else if (v[i][j] == 'O')
                tO++;
            else
                draw++;
        }
    }

    bool x = false, o = false;

    loop(i, 3)
    {
        ll countX = 0, countO = 0;
        loop(j, 3) if (v[i][j] == 'X')
            countX++;
        else if (v[i][j] == 'O')
            countO++;

        if (countX == 3)
        {
            x = true;
            vX++;
        }
        if (countO == 3)
        {
            o = true;
            vO++;
        }
    }

    loop(i, 3)
    {
        ll countX = 0, countO = 0;
        loop(j, 3) if (v[j][i] == 'X')
            countX++;
        else if (v[j][i] == 'O')
            countO++;

        if (countX == 3)
        {
            x = true;
            vX++;
        }
        if (countO == 3)
        {
            o = true;
            vO++;
        }
    }

    ll counterX = 0, counterO = 0;
    loop(i, 3)
    {

        if (v[i][i] == 'X')
            counterX++;
        else if (v[i][i] == 'O')
            counterO++;
    }

    if (counterX == 3)
    {
        x = true;
        vX++;
    }
    if (counterO == 3)
    {
        o = true;
        vO++;
    }

    counterX = 0, counterO = 0;
    loop(i, 3)
    {

        if (v[i][2 - i] == 'X')
            counterX++;
        else if (v[i][2 - i] == 'O')
            counterO++;
    }
    if (counterX == 3)
    {
        x = true;
        vX++;
    }
    if (counterO == 3)
    {
        o = true;
        vO++;
    }

    if ((x == true && o == true) || (tX > tO + 1) || 
    (tO > tX) || (x == true && (tX == tO)) || (o == true && (tX > tO)))
        cout << 3 << endl;
    else if (x == true || o == true || (draw == 0))
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}