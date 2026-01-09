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
        int a,b,c;
        cin >> a >> b >> c;
        if(c%2==0){
            if(a>b){
                cout<<"First\n";
            }
            else{
                cout<<"Second\n";
            }
        }
        else{
            if(a<b){
                cout<<"Second\n";
            }
            else{
                cout<<"First\n";
            }
        }
    }
    return 0;
}