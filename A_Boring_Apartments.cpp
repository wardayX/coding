#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans = 0;
        int n=x%10;
        if(x/10==n){
            ans = 3*n + 7*(n-1);
        }
        else if(x/100==n){
            ans = 6*n + 4*(n-1);
        }
        else if(x/1000==n){
            ans = 10*n;
        }
        else if(x/1==n) ans=1*n + 9*(n-1);
        else if(x==11) ans=3;
        else if(x==111) ans=6;
        else if(x==1111) ans=10;
        cout<<ans<<endl;
    }
}