#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, rev=0 , rem, temp;
    cin>>x;
    int flag=0;
    int y=x;
    while(x){
        flag+=1;
        x=x/10;
    }
    x=y;
    for(int i=0;i<flag;i++){
        rem=x%10;
        temp=9-rem;
        if(rem>temp){
             rev=rev*10+rem;
             }
        else{
            rev=rev*10+(temp);
        }
        x=x/10;
    }
    int u=0;
    for(int i=0;i<flag;i++){
        rem=rev%10;
        u=u*10+rem;
        rev=rev/10;
    }
    std::cout<<u;

}