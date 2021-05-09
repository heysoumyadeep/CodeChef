
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        size_t in = 0;
        while (true) 
        {
            in = s.find("party", in);
            if (in == std::string::npos) break;
            s.replace(in, 5, "pawri");
            in += 5;
        }
        cout << s << endl;
    }
}