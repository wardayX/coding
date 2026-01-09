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

int tcuny(string s, string t) {
    int count = 0;
    int l = s.length();
    while(s.length() > 0 && t.length() > 0) {
        if(s.back() == t.back()) {
            t.pop_back();
        }
        else {
            count++;
        }
        s.pop_back();
    }
    if(t.length() == 0){
      return count;
    }
    return l;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.length() < 2) {
            cout << s.length()<<endl;
        } else {
            cout<<min({tcuny(s,"00"),tcuny(s,"25"),tcuny(s,"50"),tcuny(s,"75")})<<endl;
        }
    }
  }