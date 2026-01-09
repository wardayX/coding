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
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0,ans=0;
        for(int i=0;i<n;++i){
            if(a[i]==2){
                cnt++;
            }
        }
        int x=cnt;
        if(cnt%2==1){
            cout<<-1<<endl;
        }
        else if(cnt==0){
            cout<<1<<endl;
        }
        else{
        for(int i=0;i<n;++i){
            ans++;
            if(a[i]==2)  cnt--;
            if(x/2==cnt){
                break;
            }
        }
        cout<<ans<<endl;
        }
    }
    return 0;
}