#include <bits/stdc++.h>
using namespace std;    
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t && t<10000;i++){
        int a;
        cin>>a;
        if(a%100 >=2 && ((a/100==10 && a%100>=10) || a/10==10)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    vector<int> v(10,-1);
    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}