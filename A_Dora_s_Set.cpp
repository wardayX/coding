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
        int l,r,count=0;
        cin >> l >> r;
        int odd=0;
        for(int i=l;i<=r;i++){
            if(i%2!=0){
                odd++;
            }
        }
        cout<<floor(odd/2)<<endl;   

    }
    return 0;
}