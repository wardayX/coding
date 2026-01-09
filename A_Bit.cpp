#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int x, k=0;
    cin>>x;
    string s[]={"++X","X++","--X","X--"};
    while(x--){
        string a;
        cin>>a;
        if(a=="++X" || a=="X++"){
            k+=1;
        }
        else if(a=="--X" || a=="X--"){
            k-=1;
        }
        cout<<endl;
    }
    cout<<k;
    return 0;
}    
