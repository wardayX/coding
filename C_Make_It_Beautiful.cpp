#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define ull unsigned long long
ll factorial(ll n)              { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)              { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r)              { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b)         { ull ans = 1; a%=MOD; while(b){ if (b&1) ans = (ans*a) % MOD; a = (a*a) % MOD; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i*i <= n; i++) if(n % i == 0) return false; return true; }
bool isPalindrome(string s, int i){if(i > s.size()/2){return true ; }return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;   }
template<size_t N> bool operator<(const bitset<N>& x, const bitset<N>& y){for (int i = N-1; i >= 0; i--) {if (x[i] ^ y[i]) return y[i];}return false;}			



void solve() {
    ll n, k; cin >> n >> k;
    ll ans = 0;
    vector<ll> a(n);
    
    for (ll &i : a) {
        cin >> i;
        ans += __builtin_popcountll(i);
    }

    priority_queue<pair<ll, pair<int, int>>, vector<pair<ll, pair<int, int>>>, greater<pair<ll, pair<int, int>>>> pq;
    
    for (int i = 0; i < n; i++) {
        for (int bit = 0; bit <= 60; bit++) {
            ll cost = (1LL << bit);
            if (!(a[i] & cost)) {
                pq.push({cost, {i, bit}});
            }
        }
    }
    
    while (!pq.empty() && k >= pq.top().first) {
        pair<ll, pair<int, int>> current = pq.top();
        pq.pop();
        ll cost = current.first;
        pair<int, int> pos = current.second;
        int idx = pos.first;
        int bit = pos.second;
        
        if (!(a[idx] & (1LL << bit))) {  
            ans++;
            k -= cost;
            a[idx] |= (1LL << bit);
        }
    }
    
    cout << ans << "\n";
}


int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}