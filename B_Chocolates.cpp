#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair   
#define pb push_back    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll int n;
    cin >> n;
    ll int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll int sum = a[n-1];
    if(n == 1)
    {
        cout << a[0] << endl;
        return 0;
    }
    else{
        for(int i=n-2;i>=0;i--){
            if(a[i] < a[i+1]){
                sum += a[i];
            }
            else{
                a[i] = a[i+1] - 1;
                if(a[i] < 0)
                    a[i] = 0;
                sum += a[i];
            }
        }
    }
    cout << sum << endl;


    return 0;
}