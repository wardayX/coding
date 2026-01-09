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



void solve()
{
    int n;
    cin >> n;
    
    vector<int> l(n + 1), r(n + 1);
    vector<int> ps(2 * n + 1, 0);
    vector<int> freq(2 * n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
        
        if (l[i] == r[i]) {
            ps[l[i]] = 1;
            freq[l[i]]++;
        }
    }
    
    for (int i = 2; i <= 2 * n; i++) {
        ps[i] += ps[i - 1];
    }
    
    for (int i = 1; i <= n; i++) {
        bool can = false;
        
        if (l[i] == r[i]) {
            can = (freq[l[i]] <= 1);
        } else {
            int fill = ps[r[i]] - ps[l[i] - 1];
            int il = r[i] - l[i] + 1;
            can = (fill < il);
        }
        
        cout << (can ? "1" : "0");
    }
    cout << endl;
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