#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y')
            continue;
        else
            ans.pb(s[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ".";
        if (ans[i] >= 'A' && ans[i] <= 'Z')
            cout << (char)(ans[i] + 32);
        else
            cout << ans[i];
    }
    return 0;
}