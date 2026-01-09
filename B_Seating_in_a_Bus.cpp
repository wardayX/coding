#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<bool> v1(n+2,false);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> g;
        int check=0;
        v1[v[0]]=true;
        if(v[0]==1)  v1[0]=true;
        if(v[0]==n)  v1[n+1]=true;
        for(ll i = 1; i < n; i++)
        {
            v1[v[i]]=true;
            if(v1[v[i]-1]==false && v1[v[i]+1]==false)
            {
                check=1;
                break;
            }
        }
        if(check==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}