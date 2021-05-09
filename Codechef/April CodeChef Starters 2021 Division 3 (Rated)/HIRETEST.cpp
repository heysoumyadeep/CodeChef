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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int full = 0;
            int partial = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == 'F')
                    full++;
                else if (s[j] == 'P')
                    partial++;
            }
            if ((full >= x) || (full >= (x - 1) && partial >= y))
                temp += "1";
            else
                temp += "0";
        }
        cout << temp << endl;
    }
    return 0;
}