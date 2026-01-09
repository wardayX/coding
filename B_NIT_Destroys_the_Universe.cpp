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
        int n,g=1;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int l = -1, r = -1;
        for (int i = 0; i < n; ++i)
        {
            if (v[i])
            {
                r = i;
                if (l == -1)
                    l = i;
            }
        }
        if (l == -1)
            cout << 0 << endl;
        else
        {
            for (int i = l; i <= r; ++i)
            {
                if (v[i] == 0)
                {
                    g=2;
                    break;
                }
            }
            cout << g << endl;
        }
    }
        return 0;
    }