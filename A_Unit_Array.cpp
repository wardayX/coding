#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cp = 0, cn = 0,ans=0 ;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                cp++;
            }
            else
            {
                cn++;
            }
        }
        while(!((cp-cn)>=0 && cn%2==0)){
            cn--;
            cp++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}