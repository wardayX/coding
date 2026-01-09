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
        int a,b,c=0,check=1;
        cin >> a >> b;
        string n,m;
        cin >> n >> m;
        for(int i=0;i<b;i++){
            for(int j=c+1;j<a;j++){
                if(m[i]==n[j]){
                    c=j;
                    check=j+2;
                    break;
                }
                else{
                    if(check==a){
                        check=0;
                        break;
                    }
                }
            }
            if(i==b-1){

            }
        }
    }
    return 0;
}
