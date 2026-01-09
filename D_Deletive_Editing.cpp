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
        string s,t;
        cin>>s>>t;
        ll a[26]={0},b[26]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'A']++;
        }
        for(int i=0;i<t.size();i++)
        {
            b[t[i]-'A']++;
        }
        int flag = 1;
        for(int i=0;i<26;i++)
        {
            if(a[i] - b[i] < 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            string ans="";
            for(int i=s.size()-1;i>=0;i--)
            {
            int x = s[i]-'A';
            if(b[x])
            {
                ans+= s[i];
                b[x]--;
            }
            }
            reverse(ans.begin(),ans.end());
            if(ans==t) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}