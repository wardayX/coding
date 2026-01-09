#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll int t;
    cin >> t;
    while(t--)
    {
        ll int x,y,n;
        cin>>x>>y>>n;
        ll int a=n/x;
        ll int b=a*x+y;
        if(b>n){
            cout<<b-x<<endl;
        }
        else
            cout<<b<<endl;
    }
    return 0;
}