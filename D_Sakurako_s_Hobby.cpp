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
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x=i+1;
            if(s[i] == '1')
                v.pb(x);
        }
        if(v.size() == 0)
        {
            for(int i=0; i<n; i++)
                cout << 0 << " ";
            cout << endl;
            continue;
        }
        else{

        for(int i=0; i<n;i++){
            int z=a[v[0]];
            for(int j=0; j<v.size(); j++)
            {
                a[v[j]]=z;
            }
        }
        }
    }
    return 0;
}