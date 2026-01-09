#include <bits/stdc++.h>
using namespace std; 
int main(){
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    if(x>y && y>z){
        cout<<(x-y)+(y-z);
    }
    else if(y>x && x>z){
        cout<<(y-x)+(x-z);
    }
    else if(x>z && z>y){
        cout<<(x-z)+(z-y);
    }
    else if(z>y && y>x){
        cout<<(z-y)+(y-x);
    }
    else if(z>x && x>y){
        cout<<(z-x)+(x-y);
    }
    else if(y>z && z>x){
        cout<<(y-z)+(z-x);
    }
}
