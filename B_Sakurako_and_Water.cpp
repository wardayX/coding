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
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int count=0,neg=0;
        for(int i=0;i<n;i++){
            if(a[i][i]<0){
                neg=max(abs(a[i][i]),neg);
            }
        }
        count+=neg;
        neg=0;
        int k=1;
        while(k<n){
            for(int i=0,j=0;i+k<n && j<n;i++,j++){
            if(a[i+k][j]<0){
                neg=max(abs(a[i+k][j]),neg);
            }
        }
        count+=neg;
        neg=0;
        k++;
        }
        k=1;
        while(k<n){
            for(int i=0,j=0;i<n && j+k<n;i++,j++){
            if(a[i][j+k]<0){
                neg=max(abs(a[i][j+k]),neg);
            }
        }
        count+=neg;
        neg=0;
        k++;
        }
        cout<<count<<endl;

    }
    return 0;
}