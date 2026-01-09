#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     
#define pb push_back    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,b=0;
    cin >> t;
    while(t)
    {
        if(t>=5)
        {
            t-=5;
            b++;
        }
        else
        {
            b++;
            break;
        }
    }
    cout<<b;
    return 0;
}