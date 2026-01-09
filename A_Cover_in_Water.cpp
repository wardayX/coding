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
        int n,b=0,count=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                b++;
                count++;
                if(b==3){
                    count=2;
                    break;
                }
            }
            else{
                b=0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}