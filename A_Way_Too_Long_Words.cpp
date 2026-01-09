#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size() > 10)
        {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}