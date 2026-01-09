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
        ll int n,k,min1=0,min2=0;
        cin >> n >> k;
        ll int a[n];
        for(ll int i=0;i<n;i++)
        {
            a[i]=k+i;
        }
        if(n%2!=0){
            for(ll int i=0;i<=(n-1)/2;i++){
                min1+=a[i];
            }
            for(ll int i=((n-1)/2)+1;i<n;i++){
                min1-=a[i];
            }
            cout << abs(min1) << endl;
        }
        else{
            
        }

    }
    return 0;
}