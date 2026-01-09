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
        int n,k,check=0,gold=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=k){
                gold+=a[i];
            }
            if(a[i]==0 && gold>0){
                check++;
                gold--;
            }
        }
        cout<<check<<endl;
    }
    return 0;
}