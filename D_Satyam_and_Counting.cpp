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
ll avg(ll a, ll b)               { return (a+b)/2;}


struct Point {
    ll x, y;
    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
};

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<Point> nums;
        map<ll,ll> b; 
        set<Point> check;
        for (ll i = 0; i < n; i++) {
            ll x, y;
            cin >> x >> y;
            nums.push_back({x, y});
            b[x]++;
            check.insert({x, y});
        }
        ll ans = 0;
        for (const auto& pair : b) {
            if (pair.second == 2) {
                ans += n - 2;
            }
        }
        for (const Point& p : check) {
            Point left = {p.x - 1, p.y ^ 1};
            Point right = {p.x + 1, p.y ^ 1};
            
            if (check.count(left) && check.count(right)) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}