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
        int n,cond=0,rem=0;
        char c[100],a[5]={'a','e','i','o','u'};
        cin >> n;
        cond=n/5;
        int p=cond;
        rem=n%5;
        for(int i=0;i<cond;i++){
            cout<<a[0];
        }
        if(rem!=0){
            cout<<a[0];
            rem--;
        }
        for(int i=0;i<cond;i++){
            cout<<a[1];
        }
        if(rem!=0){
            cout<<a[1];
            rem--;
        }
        for(int i=0;i<cond;i++){
            cout<<a[2];
        }
        if(rem!=0){
            cout<<a[2];
            rem--;
        }
        for(int i=0;i<cond;i++){
            cout<<a[3];
        }
        if(rem!=0){
            cout<<a[3];
            rem--;
        }
        for(int i=0;i<cond;i++){
            cout<<a[4];
        }
        cout<<endl;
    }
    return 0;
}