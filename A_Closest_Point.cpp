#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        int b[a[i]];
        for(int j=0;j<a[i];j++){
            cin>>b[j];
        }
        if(a[i]!=2){
            cout<<"NO"<<endl;
        }
        else if((b[1]-b[0])==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    };
    
    return 0;
}