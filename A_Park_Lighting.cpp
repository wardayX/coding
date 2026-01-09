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
        int n,m;
        cin>>n>>m;
        if(m%2==0){
            cout<<(n*m)/2<<endl;
        }
        else{
        cout<<(n*m+1)/2<<endl;
        }  
    }
    return 0;
}