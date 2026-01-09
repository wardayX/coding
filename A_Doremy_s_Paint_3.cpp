#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        int check=0;
        if(a[0]==a[(n-1)/2] && a[(n+1)/2]==a[n-1]){
            check++;
        }
        reverse(a, a+n);
        if(a[0]==a[(n-1)/2] && a[(n+1)/2]==a[n-1]){
            check++;
        }
        reverse(a, a+n);
        if(a[0]==a[n-1]){
            cout<<"Yes"<<endl;
        }
        else if(n==2){
            cout<<"Yes"<<endl;
        }
        else if(check!=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}