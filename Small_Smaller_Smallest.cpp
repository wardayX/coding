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

string val(string s,int m, int n){
    ll cnt1=0;
        for(int i=m;i<=n;i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
        }
        string o=s.substr(0,m);
        for(int i=m;i<=n;i++)
        {
            if(cnt1%2==0)
            {
                if(s[i]=='0') o+='0';
            }
            else
            {
                if(s[i]=='1') o+='1';
            }
        }
        return o;
}


int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,val1=0;
        cin >> n;
        string s;
        for(ll i=0;i<n;i++)
        {
            char c;
            cin >> c;
            s+=c;
            if(c=='1')
            {
                val1++;
            }
        }
        if(val1%2==1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}