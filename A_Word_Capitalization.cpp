#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     
#define pb push_back    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    if(s[0]>='a' && s[0]<='z'){
        s[0] = s[0] - 32;
    }
    cout << s;
    return 0;
}