#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int p[n];
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                if(s[i][j]=='#'){
                    p[i]=j+1;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}