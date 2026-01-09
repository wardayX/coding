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
        ll int n,k,count=0;
        cin >> n >> k;
        for(int i=0;i<=2;i++){
            if(n-i*k>=0 && (n-i*k)%2==0){
                count++;
                break;
        }
        }
        if(count>0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}