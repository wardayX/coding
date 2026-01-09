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
        int n, m, ans=0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {   for (int j = 0; j < m; j++)
            {
                char o; cin>>o;
                if(o=='R' && j==m-1) ans++;
                if(o=='D' && i==n-1) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}