#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

        ll int n,m,c=0;
        cin >> n >> m;
        ll int in=m/n;
        double f=(double)m/n;
        if(n==m){
            cout<<0<<endl;
        }
        else if(in != f){
            cout<<-1<<endl;
        }
        else{
            while(in%2==0){
                in/=2;
                c++;
            }
            while(in%3==0){
                in/=3;
                c++;
            }
            if(in==1){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    
    return 0;
}