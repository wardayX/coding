#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.ep(x);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]>=v[k-1] && v[i]>0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}