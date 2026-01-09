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
        int n;
        int cnt=1;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i]; 
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]==a[0]){
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt==n){
            cout << -1 << endl;
        }
        else{
            cout<<cnt<<" "<<n-cnt<<endl;
            for(int i=0;i<cnt;i++){
            cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=cnt;i<n;i++){
                    cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}