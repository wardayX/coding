#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll int k;
        cin >> k;
        vector<ll> a(k);
        for(int i = 0; i < k; i++)
            cin >> a[i];
        int ans = 0;
        for(int i=0;i<k-1;i++){
            ans+=(!((a[i]^a[i+1])&1));
        }
        cout<<ans<<endl;
    }
    return 0;
}