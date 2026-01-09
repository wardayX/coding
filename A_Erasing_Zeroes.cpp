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
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0'){
                n--;
            }
            else{
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){
                int j = i+1;
                if(s[j]=='0'){
                while(j<n && s[j]=='0')
                {
                    count++;
                    j++;
                }
                }
                else{
                    continue;
                }
                i=j-1;
            }
        }
            cout << count << endl;
        
    }
    return 0;
}