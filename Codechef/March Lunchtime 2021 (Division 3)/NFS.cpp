#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        float V = (u * u) - (2 * a * s);
        if (V < 0)
            cout << "Yes" << endl;
        else
            v >= sqrt(V) ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}