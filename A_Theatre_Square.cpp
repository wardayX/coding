#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair    
#define pb push_back     

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n,m,a;
    cin>>n>>m>>a;
    cout<<((n+a-1)/a)*((m+a-1)/a);
    return 0;
}