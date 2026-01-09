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
        int a,b,c,d,h=0;
        cin >> a >> b >> c >> d;
        if(b<=d && c<= a+d-b){
            cout<< (d-b) + (a+d-b-c) << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}