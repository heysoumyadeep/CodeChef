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
        int n, m;
        cin >> n >> m;
        bool check = false;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 1; i <= m; i++)
        {
            if (s.find(i) == s.end())
            {
                check = true;
                break;
            }
        }
        cout << (check ? "Yes" : "No") << endl;
    }
    return 0;
}