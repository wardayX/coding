#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main()
{
    ll int n;
    cin >> n;
    ll int a = 0, b = 0;
    for(int i=0; i<=n; i+=4){
        if((n-i)%7==0){
            a = i;
            b = n-i;
            break;
        }
    }
    if(a==0 && b==0){
        cout << -1;
    }
    else{
        for(int i=0; i<a/4; i++){
            cout << 4;
        }
        for(int i=0; i<b/7; i++){
            cout << 7;
        }
    }
    return 0;
}