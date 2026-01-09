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
    int n, m, k;
    cin >> n >> m >> k;
    string A;   cin >> A;
    vector<int> logs;
    for (int i = 0; i < n; i++) {
        if (A[i] == 'L') {
            logs.push_back(i);
        }
    }
    logs.push_back(n + 1);
    int i = -1;
    int next_log = 0;
    while (i < n - 1) {
        if (m >= logs[next_log] - i) {
            i = logs[next_log];
        } else {
            i += m;
            if (i > n - 1) {
                cout << "YES" << endl;
                return;
            }
            while (i < n && i < logs[next_log]) {
                if (A[i] != 'C' && k > 0) {
                    i++;
                    k--;
                } else {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        next_log++;
    }
    cout << "YES" << endl;
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