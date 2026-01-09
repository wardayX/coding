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
        ll int n,ck=0,mi,ans=1,h=1;
        cin >> n;
        ll int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        mi=1e9;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                ck=1;
                break;
            }
            else if(a[i-1]==a[i]){
                ans=0;
            }
            mi = min((a[i]-a[i-1]),mi); 
        }
        if(ck==1){
            cout << 0 << endl;
        }
        else{
            if(ans==0){
                cout << 1 << endl;
            }
            else{
                cout<<mi/2 +1<<endl;
            }
        }
    }
    return 0;
}