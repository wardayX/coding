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
        int x,y;
        cin >> x >> y;
        if(x<=y){
            if(n%x==0){
                cout<<n/x<<endl;
            }
            else{
                cout<<(n/x)+1<<endl;
            }
        }
        else{
            if(n%y==0){
                cout<<n/y<<endl;
            }
            else{
                cout<<(n/y)+1<<endl;
            }
        }
    }
    return 0;
}