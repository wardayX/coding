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
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
        a[i]=abs(a[i]);
    }
    sort(a,a+t);
    cout<<abs(a[0])<<endl;
    return 0;
}