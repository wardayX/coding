#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,k;
        cin>>x>>y>>k;
        for (int i = 1; i <= k; i++)
        {
            if(k%2==0)
            {
                if(i%2!=0){
                    x=x-i;
                    y=y-i;
                cout<<x<<" "<<y<<endl;}
                else{
                    x=x+i;
                    y=y+i;
                cout<<x<<" "<<y<<endl;}
            }
            else
            {
                if(i==1){
                cout<<x<<" "<<y<<endl;}
                else{
                if(i%2!=0){
                    x=x-i+1;
                    y=y-i+1;
                cout<<x<<" "<<y<<endl;}
                else{
                    x=x+i-1;
                    y=y+i-1;
                cout<<x<<" "<<y<<endl;}
                }
            }
        }
        
    }









    return 0;
}