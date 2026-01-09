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
        int n,m=1; 
        cin >> n;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                m=n/i;
                break;
            }
        }
        cout << m << " " << n-m << endl;
    }
    return 0;
}
