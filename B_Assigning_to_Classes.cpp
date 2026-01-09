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
        int k=2*n;
        int a[k];
        for(int i=0; i<k; i++)
        {
            cin >> a[i];
        }
        sort(a, a+k);
        cout << a[n] - a[n-1] << endl;
    }
    return 0;
}