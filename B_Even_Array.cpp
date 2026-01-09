#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair    
#define pb push_back    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i % 2 != a[i] % 2)
            {
                if(i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        if(odd != even)
            cout << -1 << endl;
        else
            cout << odd << endl;
    }
    return 0;
}