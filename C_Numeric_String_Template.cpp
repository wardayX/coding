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


bool check(const string& s, const vector<int>& arr) {
    if (s.length() != arr.size()) {
        return false;
    }
    unordered_map<char, int> m1; 
    unordered_map<int, char> m2;  
    for (size_t i = 0; i < s.length(); ++i) {
        char si = s[i];
        int ai = arr[i];
        if (m1.find(si) == m1.end() && m2.find(ai) == m2.end()) {
            m1[si] = ai;
            m2[ai] = si;
        }
        else if (
            (m1.find(si) != m1.end() && m1[si] != ai) ||
            (m2.find(ai) != m2.end() && m2[ai] != si)
        ) {
            return false;
        }
    }

    return true;
}


int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int m; cin >> m;
        string s[m];
        for (int i = 0; i < m; ++i) {
            cin >> s[i];
        }
        for(int i = 0; i < m; i++) {
            if (check(s[i], arr)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}