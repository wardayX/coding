#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back 
#define pb push_back     
#define mp make_pair    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        n=n-2;
        float j=(float)n/x;
        if(n<=0){
            cout<<1<<endl;
        }
        else{
            cout<<ceil(j)+1<<endl;
        }
    }
    return 0;
}