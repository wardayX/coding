#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,max=1,curr=0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i] > a[i - 1])
        {
            curr++;
            if (curr > max)
            {
                max = curr;
            }
        }
        else
        {
            curr = 1;
        }
    }
    cout << max << endl;
    return 0;
}