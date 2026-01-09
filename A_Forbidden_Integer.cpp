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
        int n,k,x;
        cin >> n >> k >> x;
        if(n%2==0){
            if(x==1 && k==1){
                cout<<"NO"<<endl;
            }
            else if(x==2){
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0;i<n;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
        else{
            if(x==1 && k==1){
                cout<<"NO"<<endl;
            }
            else if(x==1 && k<3){
                cout<<"NO"<<endl;
            }
            else if(x==1 && k>2){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2-1;i++){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0;i<n;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}