#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<ll> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        while(q--){
            ll x;
            cin >> x;
            if(x<a[0]) cout<<a[0]-1<<endl;
            else if(x>a[m-1]) cout<<n-a[m-1]<<endl;
            else{
                int l=0, r=m-1;
                while(l<r){
                    int mid = l+(r-l)/2;
                    if(a[mid]<x) l=mid+1;
                    else r=mid;
                }
                if(a[l]==x) cout<<0<<endl;
                else cout<<a[l]-x-1<<endl;
            }
        }
    }
    return 0;
}