#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a[4];
    for(int i=0; i<4; i++) cin >> a[i];
    sort(a, a+4);
    cout << a[3]-a[0] << " " << a[3]-a[1] << " " << a[3]-a[2] << endl;
    return 0;
}