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
        int n,check=0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            if(a[i] == i+1)
            {
                check++;
            }
        }
        if(check == 0) cout<<0<<endl;
        else if(check%2==0 && check !=0) cout<<check/2<<endl;
        else cout<<(check/2)+1<<endl;
    }
    return 0;
}