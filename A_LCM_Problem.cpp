#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     
#define pb push_back     

void LCM(ll l, ll r)
{
    if(2*l<=r)
    {
        cout<<l<<" "<<2*l<<endl;
    }
    else
    {
        cout<<-1<<" "<<-1<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        LCM(l,r);
    }
    return 0;
}