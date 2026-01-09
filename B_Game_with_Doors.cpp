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
        int l, r, L, R;
        cin >> l >> r;
        cin >> L >> R;
        if (l == L && r == R)
        {
            cout << r - l << endl;
        }
        else if ((l != L) && (r == R))
        {
            cout << R-max(l,L)+1 << endl;
        }
        else if ((r != R) && (l==L))
        {
            cout << min(r,R)-L+1 << endl;
        }
        else if(r<L || R<l)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << min(r,R)-max(l,L) + 2 << endl;
        }
    }
    return 0;
}