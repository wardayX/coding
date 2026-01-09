#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    cin >> a[i];
    int abs = 0, gg = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (a[i % n] == 1) {
            gg++;
            abs = max(abs, gg);
        }  
        else 
        {
            gg = 0;
        }
    }
    cout << abs << endl;
    return 0;
}