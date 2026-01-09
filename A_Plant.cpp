#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main()
{
    ll n, rem, g = 2, r = 1;
    ll d = 1e9 + 7;
	
	cin >> n;
	while(n != 0)
	{
		if(n % 2 != 0)
		{
			r = r * g % d;
		}
		
		n /= 2;
		g = g * g % d;
	}
	
	rem = ((r + 1) * r / 2) % d;
	cout << rem << endl;

	return 0;;
}