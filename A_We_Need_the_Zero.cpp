#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int xor_val = 0;
        for (int i = 0; i < n; ++i)
        {
            xor_val ^= a[i];
        }
        if (xor_val == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << xor_val << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}