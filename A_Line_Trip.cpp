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
        int n, x;
        cin >> n >> x;
        int pr = 0, ass = 0;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            ass = max(ass, a - pr);
            pr = a;
            }
            ass = max(ass, 2 * (x - pr));
            cout << ass << '\n';
    }
    return 0;
}