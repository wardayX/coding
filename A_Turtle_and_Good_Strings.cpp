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
        int k,flag=0;
        cin >> k;
        char s[k];
        for(int i = 0; i < k; i++){
            cin >> s[i];
        }
        

        if(s[0]!=s[k-1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }


    

    return 0;
}