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
        int n,c=0;
        cin >> n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        for(;i<=j;i++,j--){
            if(s[i]!=s[j]){
               c=c+2; 
            }
            else if(s[i]==s[j]){
                break;
            }
            
        }
        cout<<n-c<<endl;
    }
    return 0;
}