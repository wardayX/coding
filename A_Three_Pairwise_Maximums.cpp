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
        int h[3];
        cin>>h[0]>>h[1]>>h[2];
        sort(h,h+3);
        if(h[1]==h[2]){
            cout<<"YES"<<endl;
            cout<<1<<" "<<h[2]<<" "<<h[0]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}