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
    int r, c;
       cin >> r >> c;
       
       vector<string> grid1(r), grid2(r);
       for (auto& row : grid1) cin >> row;
       for (auto& row : grid2) cin >> row;
       
       vector<int> cs1(c), cs2(c);
       vector<int> rs1(r), rs2(r);
       
       for (int i = 0; i < r; i++) {
           for (int j = 0; j < c; j++) {
               cs1[j] = (cs1[j] + (grid1[i][j] - '0')) % 3;
               cs2[j] = (cs2[j] + (grid2[i][j] - '0')) % 3;
               rs1[i] = (rs1[i] + (grid1[i][j] - '0')) % 3;
               rs2[i] = (rs2[i] + (grid2[i][j] - '0')) % 3;
           }
       }
       
       bool chk = true;
       for (int i = 0; i < r; i++) {
           if (rs1[i] != rs2[i]) {
               chk = false;
               break;
           }
       }
       
       for (int i = 0; i < c; i++) {
           if (cs1[i] != cs2[i]) {
               chk = false;
               break;
           }
       }
       
       cout << (chk ? "YES\n" : "NO\n");
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