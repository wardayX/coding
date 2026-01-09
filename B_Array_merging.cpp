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
        ll int n;
        cin >> n;
        vector<ll int> a(n),b(n);
        vector<ll int> c1(2 * n),c2(2 * n);
        for (ll int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
       map<int, int> ans1, ans2;
		int cnt = 1;
		int mx = -1;
		for(int i = 1; i < n; ++i){
			if(a[i] == a[i - 1]){
				++cnt; 
			}else{
				ans1[a[i - 1]] = max(ans1[a[i - 1]], cnt);
				mx = max(mx, ans1[a[i - 1]]);
				cnt = 1;
			}
		}
		ans1[a[n - 1]] = max(ans1[a[n - 1]], cnt);
		mx = max(ans1[a[n - 1]], mx);
		cnt = 1;
		for(int i = 1; i < n; ++i){
			if(b[i] == b[i - 1]){
				++cnt;
			}else{
				ans2[b[i - 1]] = max(ans2[b[i - 1]], cnt);
				mx = max(mx, ans2[b[i - 1]]);
				mx = max(mx, ans1[b[i - 1]] + ans2[b[i - 1]]);
				cnt = 1;
			}
		}
		ans2[b[n - 1]] = max(ans2[b[n - 1]], cnt);
		mx = max(ans2[b[n - 1]], mx);
		mx = max(mx, ans1[b[n - 1]] + ans2[b[n - 1]]);
		cout << mx << endl;
    }
    return 0;
}