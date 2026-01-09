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
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<t-1; i++)
    {
        if(s[i]==s[i+1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}