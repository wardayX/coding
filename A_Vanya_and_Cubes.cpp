#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,count=0;
    cin >> t;
    if(t==1){
        cout<<1;
        return 0;
    }
    for(int i=1;i<=t;i++){
        count+=i*(i+1)/2;
        if(count>t){
            cout<<i-1;
            break;
        }
    }
}