#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,max=0,min=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    min = a[0], max = a[0];
    int ans = 0;
    for(int i=1;i<n;i++){
        if(a[i] > max){
            max = a[i];
            ans++;
        }
        else if(a[i] < min){
            min = a[i];
            ans++;
        }
    }
    cout << ans << endl;
}