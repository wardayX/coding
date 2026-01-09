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
    string s;  
    cin >> s;
    int i = 0,c=0;
    while(i < s.size())
    {
        cout << s[i];
                c++;
                i=i+c;

    }
    cout << endl;
    return 0;
}