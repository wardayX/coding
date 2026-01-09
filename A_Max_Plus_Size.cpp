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
        int n,max=INT_MIN,o=0,e=0;
        cin >> n;
        int a[n];
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){
                max=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==max){
                v.ep(i+1);
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]%2!=0){
                o++;
                break;
            }
        }
        if(n%2==0){
            cout<<max+n/2<<endl;
        }
        else{
            if(o>0){
                cout<<max+n/2+1<<endl;
            }
            else{
                cout<<max+n/2<<endl;
            }
        }

    }
    return 0;
}