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

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;
        vector<ll> v(n),v1(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum+=v[i];
        }
        v1[0] = v[0];
        for(int i=1;i<n;i++){
            v1[i] = v1[i-1] + v[i];
        }
        while(q--){
            ll l,r,k;
            cin >> l >> r >> k;
            ll ans;
            if((l-2)>=0)
            {
                ans = sum - (v1[r-1]-v1[l-2]) +(k*(r-l+1));
                }
            else
            {
                ans = sum - v1[r-1] + (k*(r-l+1));
                }
            if(ans%2==0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    } 
    return 0;
}