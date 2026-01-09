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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        a[0]+=1;
        sort(a, a+3);
        a[0]+=1;
        sort(a, a+3);
        a[0]+=1;
        sort(a, a+3);
        a[0]+=1;
        sort(a, a+3);
        a[0]+=1;
        cout << a[0]*a[1]*a[2] << endl;
    }
    return 0;
}