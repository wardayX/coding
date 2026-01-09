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
    int a[t],b[t],max=0,count=0;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        count+=b[i]-a[i];
        if(count>max){
            max=count;
        }
    }
    cout<<max;
    return 0;
}