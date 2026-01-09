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
        int n,k,check=0;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int> v;
        for(int i=1;i<n;i++){
            if(n%i==0){
                v.ep(i);
            }
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            
        }

    }
    return 0;
}