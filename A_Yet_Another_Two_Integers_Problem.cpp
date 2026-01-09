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
        ll int a,b;
        cin >> a >> b;
        if(a==b){
            cout<<0<<endl;
        }
        else{
        ll int diff = abs(a-b);
        double ans = (double)diff/10;
        int f=ceil(ans);
        cout<<f<<endl;
        }
    }
    return 0;
}