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
        int n,max=0,count=0;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]==0){
                count++;
            }
            else{
                if(count>max){
                    max=count;
                }
                count=0;
            }
        }
        int x=max>count?max:count;
        cout<<x<<endl;
        
    }
    return 0;
}