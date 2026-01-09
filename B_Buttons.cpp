#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout << 1;
    }
    else{
        
        int b=0,u=n-2;
        int v=u;
        for(int i=1;i<=u;i++){
            b=b+ i*v;
            v--;
        }
        cout<<((n*(n+1))/2) +b;
        
    }
    
    return 0;
}