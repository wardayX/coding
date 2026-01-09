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
        int b,c,d;
        cin >> b >> c >> d;
        int a=0,n=c;
        while(n--)
        {
            a = (b - c) & (b - d);
        }
        cout << a << endl;
    }
    return 0;
}