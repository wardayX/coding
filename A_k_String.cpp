#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     
#define pb push_back     

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < cnt[i] / k; j++)
        {
            ans += (char)('a' + i);
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans;
    }
    cout << endl;
    return 0;
}