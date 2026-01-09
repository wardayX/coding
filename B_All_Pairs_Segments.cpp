#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> x(n + 1);
    unordered_map<ll, ll> mp;
    for(int i = 1; i <= n; i++) {
        cin >> x[i];
        ll cnt = (n - 1) + (i - 1) * (n - i);
        mp[cnt]++;
    }
    for(int i = 1; i < n; i++) {
        if(x[i+1]>x[i]+1){ll cnt = i * (n - i);
        mp[cnt] += (x[i + 1] - x[i] - 1);}
    }
    while(q--) {
        int x;
        cin >> x;
        cout << mp[x] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}