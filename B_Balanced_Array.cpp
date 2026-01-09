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
        int n;
        cin >> n;
        if(n%4==0){
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=1;i<n-1;i+=2){
                cout<<i<<" ";
            }
            cout<<n+(n/2)-1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}