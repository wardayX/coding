#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int y=(k*l)/nl;
    int a=c*d;
    int b=p*np;
    if(y<a && y<b){
        cout<<y/n;
    }
    else if(a<b && a<y){
        cout<<a/n;
    }
    else{
        cout<<b/n;
    }
}