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
        ll int n,val=0;
        cin >> n;
        ll int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n==2){
            cout<<a[1]-a[0]<<endl;
        }
        else if(n==3){
            cout<<a[2]-(a[1]-a[0])<<endl;
        }
        else{
            val=a[n-2]-a[0];
            for(int i=n-3;i>0;i--){
                val=val-a[i];
        }
        cout<<a[n-1]-val<<endl;
        }
    }
    return 0;
}