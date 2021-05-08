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
        int l, c = 0, z = 0, flag = 0;
        string s;
        cin >> l>>s;
        for (int i = 0; i<l; i++)
        {
            if (s[i] == '0')
                z++;
            else 
                c++;
            if (c >= z)
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
