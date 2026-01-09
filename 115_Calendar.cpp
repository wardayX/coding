#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(a[m-1] >= n){
        if( n%7 == 0 ) cout << "7" << endl;
        else cout << n%7 << endl;
    }
    else cout << "Impossible" << endl;
    return 0;
}