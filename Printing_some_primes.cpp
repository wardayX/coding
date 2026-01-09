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
ll prime(ll n)                   { ll i; for(i=2; i*i<=n; i++) if(n%i == 0) return 0; return 1; }
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

int N =99998953;
int status[3200000];
int main ()
{
     int i, j, sqrtN, n;
     sqrtN = int( sqrt( N ) );
     
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( check(status[i/32],i%32)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j/32]=Set(status[j/32],j % 32);
	 		 }
		 }
	 }
	 puts("2");
	 n = 1;
	 for(i=3;i<=N;i+=2)
		 if( check(status[i/32],i%32)==0) {
         n++;
       if ( n % 100 == 1)
	 	  printf("%d\n",i);
		 }
   return 0;
}
