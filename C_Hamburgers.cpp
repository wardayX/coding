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



int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            a++;
        } else if (s[i] == 'S') {
            b++;
        } else {
            c++;
        }
    }
    int na, nb, nc;
    cin >> na >> nb >> nc;
    int pa, pb, pc;
    cin >> pa >> pb >> pc;
    ll r;
    cin >> r;
    ll lo = 0, hi = 1e13;
    while (lo < hi) {
        ll mid = lo + (hi - lo + 1) / 2;
        ll need_a = max(0LL, mid * a - na);
        ll need_b = max(0LL, mid * b - nb);
        ll need_c = max(0LL, mid * c - nc);
        ll cost = need_a * pa + need_b * pb + need_c * pc;
        if (cost <= r) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    cout << lo << endl;
    
    return 0;
}