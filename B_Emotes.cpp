#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll int n, m, k;
	cin >> n >> m >> k;
	vector<ll int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	cout << m / (k + 1) * (a[0]  * k + a[1]) + m % (k + 1) * a[0] << endl;
	return 0;
}