#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        bool flag = false;
        vector<int> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(a[i],a[j])<=2){
                    flag=true;
                }
            }
        }
        if(flag){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
