#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s,a;
    cin>>s>>a;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
    if(s==a){
        cout<<0<<endl;
    }
    else if(s<a){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}