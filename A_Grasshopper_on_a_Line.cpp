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
        int x,k;
        cin >> x >> k;
        if(x%k==0){
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
    return 0;
}