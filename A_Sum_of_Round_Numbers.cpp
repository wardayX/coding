#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     /* mp(a,b) makes a pair of a and b */
#define pb push_back     /* pb(a) pushes a into a vector */

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,zero=0,digits=0;
        cin >> n;
        int temp=n;
        while(n){
            digits++;
            if(n%10==0)
                zero++;
                n/=10;
        }
        n=temp;
        cout << digits-zero << endl;
        for(int i=0;i<digits;i++)
        {
            int x=n%10;
            if(x!=0)
                cout << x*pow(10,i) << " ";
            n/=10;
        }
        cout<<endl;
    }
    return 0;
}