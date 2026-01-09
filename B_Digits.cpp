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
ll fac(ll n) {
    if (n == 0) return 1;
    return n * fac(n - 1);
}


bool isDivisibleby9(ll n, ll d) {
    return (fac(n) * d) % 9 == 0;
}

bool isDivisibleby7(ll n, ll d) {
    return (n>=3 || (n==2 && d==7));
}

bool isDivisibleby5(ll d) {
    return (d == 5);
}

bool isDivisibleby3(ll n, ll d) {
    return (fac(n) * d) % 3 == 0;
}

void solve() {
    ll n, d;
    cin >> n >> d;
    vector<ll> v;
    v.pb(1);
    if(n>9 && (isDivisibleby5(d)) )
    {
        v.pb(3); v.pb(5); v.pb(7); v.pb(9);
         if(d % 2 == 1) v.pb(d);
        sort(v.begin(), v.end());
        v.erase(gg(v.begin(), v.end()), v.end());
        for(auto x : v) cout << x << " ";
        cout << endl;

    }
    else if(n>9 && !isDivisibleby5(d)){
        v.pb(3); v.pb(7); v.pb(9);
         if(d % 2 == 1) v.pb(d);
        sort(v.begin(), v.end());
        v.erase(gg(v.begin(), v.end()), v.end());
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
    else{
        if(isDivisibleby3(n, d)) v.pb(3);
        if(isDivisibleby5(d)) v.pb(5);
        if(isDivisibleby7(n, d)) v.pb(7);
        if(isDivisibleby9(n, d)) v.pb(9);
        if(d % 2 == 1) v.pb(d);
        sort(v.begin(), v.end());
        v.erase(gg(v.begin(), v.end()), v.end());
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
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