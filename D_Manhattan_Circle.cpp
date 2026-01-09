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
    ll n,m,mx=0;
    cin >> n >> m;
    vector<vector<char>> a(n,vector<char>(m));
    ll x=0,y=0;
    int hashcount=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='#')
            {
                hashcount++;
            }
        }
        if(hashcount>mx)
        {
            mx=hashcount;
            x=i;
        }
        hashcount=0;
    }
    ll low=0,high=m-1;
        for(ll i=0;i<m-1;i++)
        {
            if((a[x][i]=='.' && a[x][i+1]=='#'))
            {
                low=i+1;
            }
            if((a[x][i]=='#' && a[x][i+1]=='.'))
            {
                high=i;
                break;
            }
        }
        y=(low+high+2)/2;
    cout<<x+1<<" "<<y<<endl;
    
    return;
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
