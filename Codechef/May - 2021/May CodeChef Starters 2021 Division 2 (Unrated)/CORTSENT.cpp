#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mod 1000000007
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
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
    ll k, temp;
    cin >> k;
    temp = k;
    int flag = 0;
    while (k--)
    {
        int i, small = 0, cap = 0;
        string s;
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'm')
                small++;

            if (s[i] >= 'N' && s[i] <= 'Z')
                cap++;
        }
        if ((small == i) || (cap == i))
            flag++;
    }
    if (flag == temp)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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