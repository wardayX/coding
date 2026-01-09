#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main (void)
{
    int b[10],c[10],j=0,k=0;
    vector<int> a;
    int g=1;
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }

    return 0;
}