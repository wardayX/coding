#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k,r;
    cin>>k>>r;
    int i=1;
    while(1)
    {
        if((k*i)%10==0 || (k*i)%10==r)
        {
            cout<<i;
            break;
        }
        i++;
    }
    return 0;
}