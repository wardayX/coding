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
        int n,ans=1,check=0; 
        cin >> n;
        int a[n];
        int min=INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]<min){
                min=a[i];
            }
            if(a[i]!=0){
                ans*=a[i];
            }
            else{
                check++;
            }
        }
        if(check>1){
            cout << 0 << endl;
        }
        else if(check==1){
            cout << ans << endl;
        }
        else{
            cout << (ans/min)*(min+1) << endl;
        }

    }
    return 0;
}