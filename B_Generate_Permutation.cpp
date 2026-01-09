#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair    
#define pb push_back    


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int b=n,x=1,y=0;
        int* p;
        int v[n]; 
        if(n%2==0){
            cout << -1;
        }
        else{
        v[(b-1)/2]=1;
        for(int i=((b-1)/2)-1; i>=0; i--){
            x+=2;
            v[i]=x;
        }
        for(int j=((b-1)/2)+1; j<b; j++){
            y+=2;
            v[j]=y;
        }
        for(int i=0; i<b; i++){
            cout << v[i] << " ";
        }
    }
        cout << endl;
    }

    return 0;
}