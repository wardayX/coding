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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    vector<ll> b = a;
    sort(b.begin(), b.end());
    ll l = 0, r = n - 1;
    while(l < n && a[l] == b[l]) l++;
    while(r >= 0 && a[r] == b[r]) r--;
    if(l > r) cout << "yes\n1 1\n";
    else {
        reverse(a.begin() + l, a.begin() + r + 1);
        if(is_sorted(a.begin(), a.end())) cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
        else cout << "no\n";
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        solve();
    return 0;
}