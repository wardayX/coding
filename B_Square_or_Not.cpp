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
        string a;
        cin >> a;
        float x = sqrt(n);
        int y = sqrt(n);
        if(x != y)
        {
            cout << "NO" << endl;
        }
        else if(n==1){
            if(a[0] == '1')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int zeros = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i] == '0')
                {
                    zeros++;
                }
            }
            if(zeros != pow(y-2, 2)){
                cout << "NO" << endl;
            }
            else{
                int m[y][y];
                int k = 0;
                for(int i=0; i<y; i++)
                {
                    for(int j=0; j<y; j++)
                    {
                        if(i==0 || j == y-1 || j == 0 || i == y-1)
                        {
                            m[i][j] = 1;
                        }
                        else
                        {
                            m[i][j] = 0;
                        }
                    }
                }
                int flag = 0;
                for(int i=0; i<y; i++)
                {
                    for(int j=0; j<y; j++)
                    {
                        if(a[k] == '1' && m[i][j] == 0)
                        {
                            flag = 1;
                            break;
                        }
                        if(a[k] == '0' && m[i][j] == 1)
                        {
                            flag = 1;
                            break;
                        }
                        k++;
                    }
                    if(flag == 1)
                    {
                        break;
                    }
                }
                if(flag == 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}