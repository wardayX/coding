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


void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int i=0,j=n-1,flag=0;
    int sum1=0,sum2=0;
    while(i<=j){
        if(flag%2==0){
            if(v[i]<v[j]){
                sum1+=v[j];
                j--;
            }
            else{
                sum1+=v[i];
                i++;
            }
        }
        else{
            if(v[i]<v[j]){
                sum2+=v[j];
                j--;
            }
            else{
                sum2+=v[i];
                i++;
            }
        }
        flag++;
    }
    cout << sum1 << " " << sum2 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        solve();
    return 0;
}