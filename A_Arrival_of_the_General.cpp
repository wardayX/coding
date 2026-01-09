#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    int max_index=0;
    int min_index=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            max_index=i;
        }
        if(a[i]<=min){
            min=a[i];
            min_index=i;
        }
    }
    max_index++;
    min_index++;
    if(max_index>min_index){
        cout<<max_index+(n-1-min_index)-1;
    }
    else{
        cout<<max_index+(n-1-min_index);
    }

}