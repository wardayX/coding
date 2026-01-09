#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<b<<" "<<a<<endl;  
        }
    }
}