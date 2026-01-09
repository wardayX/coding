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
        ll int n,k;
        cin>>n>>k;
        if(k%4==0){
            cout<<"YES"<<endl;
        }
        else if(n%2==0 && (k+3)%4==0){
            cout<<"YES"<<endl;
        }
        else if(n%2==1 && (k+1)%4==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}