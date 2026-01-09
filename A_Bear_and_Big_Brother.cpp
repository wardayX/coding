#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        count++;
        if(a>b)
        {
            cout<<count;
            break;
        }
    }

    return 0;
}